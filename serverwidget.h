#ifndef SERVERWIDGET_H
#define SERVERWIDGET_H

#include <QWidget>
#include <QWebSocketServer>
#include <QWebSocket>

namespace Ui {
class ServerWidget;
}

class ServerWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ServerWidget(QWidget *parent = nullptr);
    ~ServerWidget();

private slots:
    void on_ptnListening_clicked();
    void on_ptncloseListen_clicked();
    void on_btnSend_clicked();

	void onTextMessageReived(QString msg);
	void onDisconnected();
    void onNewConnection();
private:
    Ui::ServerWidget*               ui;
    QWebSocketServer*               webScoketServer = nullptr;
    QWebSocket*                     webSocket = nullptr;

    


};

#endif // SERVERWIDGET_H
