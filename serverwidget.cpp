#pragma execution_character_set("utf-8")
#include "serverwidget.h"
#include "ui_serverwidget.h"

ServerWidget::ServerWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ServerWidget)
{
    ui->setupUi(this);

	webScoketServer = new QWebSocketServer("Server", QWebSocketServer::NonSecureMode);
	connect(webScoketServer, &QWebSocketServer::newConnection, this, &ServerWidget::onNewConnection);

	connect(ui->ptn_listening, &QPushButton::clicked, this, &ServerWidget::on_ptnListening_clicked);
	connect(ui->ptn_closeListening, &QPushButton::clicked, this, &ServerWidget::on_ptncloseListen_clicked);
	connect(ui->ptn_send, &QPushButton::clicked, this, &ServerWidget::on_btnSend_clicked);	
}

ServerWidget::~ServerWidget()
{
    delete ui;
}


void ServerWidget::on_ptnListening_clicked()
{
	if (ui->lineEdit_port->text().isEmpty())
		return;

	int port = ui->lineEdit_port->text().toInt();
	webScoketServer->listen(QHostAddress::Any, port);
	ui->textEdit_receive->append(QDateTime::currentDateTime().toString() + ":start listening");
}


void ServerWidget::on_ptncloseListen_clicked()
{

	ui->textEdit_receive->append(QDateTime::currentDateTime().toString() + ":stop listening");
	if (webScoketServer->isListening())
		webScoketServer->close();
}

void ServerWidget::on_btnSend_clicked()
{	
	if (webSocket)
	{
		const QString msg = ui->lineEdit_send->text();
		webSocket->sendTextMessage(msg.toUtf8());
		ui->textEdit_receive->append("Server(" + QDateTime::currentDateTime().toString() + "):" + msg);
	}
}


void ServerWidget::onNewConnection()
{
	if (webSocket)
	{
		webSocket->close();
		delete webSocket;
		webSocket = nullptr;
	}
	if (webScoketServer)
	{
		webSocket = webScoketServer->nextPendingConnection();
		connect(webSocket, &QWebSocket::textMessageReceived, this, &ServerWidget::onTextMessageReived);
		connect(webSocket, &QWebSocket::disconnected, this, &ServerWidget::onDisconnected);
		ui->textEdit_receive->append(QDateTime::currentDateTime().toString() + ": connected to the client");
	}	
}


void ServerWidget::onTextMessageReived(QString msg)
{
	qDebug() << "接受消息：" << msg;
	ui->textEdit_receive->append(+"Client(" + QDateTime::currentDateTime().toString() + "):" + msg.toUtf8());
}

void ServerWidget::onDisconnected()
{
	ui->textEdit_receive->append(QDateTime::currentDateTime().toString() + ":disconnected with the client");
}
