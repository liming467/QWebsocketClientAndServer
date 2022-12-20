#ifndef CLIENTWIDGET_H
#define CLIENTWIDGET_H

#include <QWidget>
#include <QWebSocket>

namespace Ui {
class ClientWidget;
}

class ClientWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ClientWidget(QWidget *parent = nullptr);
    ~ClientWidget();

private slots:
    void on_ptnConnect_clicked();
    void on_ptnDisConnect_cliked();
    void on_ptnSend_clicked();


    void onConnected();
    void onDisconnected();
    void onTextMessageReceived(QString msg);

private:
    Ui::ClientWidget *ui;


    QWebSocket webSocket;
};

#endif // CLIENTWIDGET_H
