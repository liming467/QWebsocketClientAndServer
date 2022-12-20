/********************************************************************************
** Form generated from reading UI file 'serverwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERWIDGET_H
#define UI_SERVERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServerWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_port;
    QPushButton *ptn_listening;
    QPushButton *ptn_closeListening;
    QTextEdit *textEdit_receive;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_send;
    QPushButton *ptn_send;

    void setupUi(QWidget *ServerWidget)
    {
        if (ServerWidget->objectName().isEmpty())
            ServerWidget->setObjectName(QString::fromUtf8("ServerWidget"));
        ServerWidget->resize(707, 642);
        ServerWidget->setLayoutDirection(Qt::LeftToRight);
        ServerWidget->setAutoFillBackground(false);
        ServerWidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(ServerWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(ServerWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit_port = new QLineEdit(ServerWidget);
        lineEdit_port->setObjectName(QString::fromUtf8("lineEdit_port"));

        horizontalLayout_2->addWidget(lineEdit_port);

        ptn_listening = new QPushButton(ServerWidget);
        ptn_listening->setObjectName(QString::fromUtf8("ptn_listening"));

        horizontalLayout_2->addWidget(ptn_listening);

        ptn_closeListening = new QPushButton(ServerWidget);
        ptn_closeListening->setObjectName(QString::fromUtf8("ptn_closeListening"));

        horizontalLayout_2->addWidget(ptn_closeListening);


        verticalLayout->addLayout(horizontalLayout_2);

        textEdit_receive = new QTextEdit(ServerWidget);
        textEdit_receive->setObjectName(QString::fromUtf8("textEdit_receive"));

        verticalLayout->addWidget(textEdit_receive);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit_send = new QLineEdit(ServerWidget);
        lineEdit_send->setObjectName(QString::fromUtf8("lineEdit_send"));

        horizontalLayout->addWidget(lineEdit_send);

        ptn_send = new QPushButton(ServerWidget);
        ptn_send->setObjectName(QString::fromUtf8("ptn_send"));

        horizontalLayout->addWidget(ptn_send);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ServerWidget);

        QMetaObject::connectSlotsByName(ServerWidget);
    } // setupUi

    void retranslateUi(QWidget *ServerWidget)
    {
        ServerWidget->setWindowTitle(QCoreApplication::translate("ServerWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("ServerWidget", "Port\357\274\232", nullptr));
        ptn_listening->setText(QCoreApplication::translate("ServerWidget", "Start listening", nullptr));
        ptn_closeListening->setText(QCoreApplication::translate("ServerWidget", "Stop listening", nullptr));
        ptn_send->setText(QCoreApplication::translate("ServerWidget", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServerWidget: public Ui_ServerWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERWIDGET_H
