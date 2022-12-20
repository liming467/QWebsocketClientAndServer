#pragma execution_character_set("utf-8")
#include "clientwidget.h"
#include "ui_clientwidget.h"


ClientWidget::ClientWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ClientWidget)
{
    ui->setupUi(this);

	this->setStyleSheet("QMainWindow {background-image:url(./resource/img/firework.jpg)}");

	//QPixmap pixmap = QPixmap("./resource/img/firework.jpg").scaled(this->size());
	//QPalette palette;
	//palette.setBrush(QPalette::Window, QBrush(pixmap));

	connect(&webSocket, &QWebSocket::connected, this, &ClientWidget::onConnected);
	connect(&webSocket, &QWebSocket::disconnected, this, &ClientWidget::onDisconnected);
	connect(&webSocket, &QWebSocket::textMessageReceived, this, &ClientWidget::onTextMessageReceived);



	connect(ui->ptn_connect, &QPushButton::clicked, this, &ClientWidget::on_ptnConnect_clicked);
	connect(ui->ptn_disConnect, &QPushButton::clicked, this, &ClientWidget::on_ptnDisConnect_cliked);
	connect(ui->ptn_send, &QPushButton::clicked, this, &ClientWidget::on_ptnSend_clicked);
}

ClientWidget::~ClientWidget()
{
    delete ui;
}


void ClientWidget::on_ptnConnect_clicked()
{
	qDebug() << "Create new connection";
	ui->textEdit_receive->append(QDateTime::currentDateTime().toString() + ": create new connection");
	QString urlStr = "ws://" + ui->lineEdit_address->text() + ":" + ui->lineEdit_port->text();
	webSocket.open(QUrl(urlStr));
}

void ClientWidget::on_ptnDisConnect_cliked()
{
	webSocket.close();
}

void ClientWidget::on_ptnSend_clicked()
{
	ui->textEdit_receive->append("Client(" + QDateTime::currentDateTime().toString() + "):" + ui->lineEdit_send->text().toUtf8());
	webSocket.sendTextMessage(ui->lineEdit_send->text().toUtf8());
}

void ClientWidget::onConnected()
{
	ui->textEdit_receive->append(QDateTime::currentDateTime().toString() + ":connected to server");
}

void ClientWidget::onDisconnected()
{
	ui->textEdit_receive->append(QDateTime::currentDateTime().toString() + ":disconnected");
}

void ClientWidget::onTextMessageReceived(QString msg)
{
	qDebug() << msg;
	ui->textEdit_receive->append("Server(" + QDateTime::currentDateTime().toString() + "):" + msg.toUtf8());
}
