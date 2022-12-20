/********************************************************************************
** Form generated from reading UI file 'clientwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTWIDGET_H
#define UI_CLIENTWIDGET_H

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

class Ui_ClientWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_address;
    QLabel *label;
    QLineEdit *lineEdit_port;
    QPushButton *ptn_connect;
    QPushButton *ptn_disConnect;
    QTextEdit *textEdit_receive;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_send;
    QPushButton *ptn_send;

    void setupUi(QWidget *ClientWidget)
    {
        if (ClientWidget->objectName().isEmpty())
            ClientWidget->setObjectName(QString::fromUtf8("ClientWidget"));
        ClientWidget->resize(729, 714);
        verticalLayout = new QVBoxLayout(ClientWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(ClientWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_address = new QLineEdit(ClientWidget);
        lineEdit_address->setObjectName(QString::fromUtf8("lineEdit_address"));

        horizontalLayout_2->addWidget(lineEdit_address);

        label = new QLabel(ClientWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit_port = new QLineEdit(ClientWidget);
        lineEdit_port->setObjectName(QString::fromUtf8("lineEdit_port"));
        lineEdit_port->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(lineEdit_port);

        ptn_connect = new QPushButton(ClientWidget);
        ptn_connect->setObjectName(QString::fromUtf8("ptn_connect"));

        horizontalLayout_2->addWidget(ptn_connect);

        ptn_disConnect = new QPushButton(ClientWidget);
        ptn_disConnect->setObjectName(QString::fromUtf8("ptn_disConnect"));

        horizontalLayout_2->addWidget(ptn_disConnect);


        verticalLayout->addLayout(horizontalLayout_2);

        textEdit_receive = new QTextEdit(ClientWidget);
        textEdit_receive->setObjectName(QString::fromUtf8("textEdit_receive"));

        verticalLayout->addWidget(textEdit_receive);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit_send = new QLineEdit(ClientWidget);
        lineEdit_send->setObjectName(QString::fromUtf8("lineEdit_send"));

        horizontalLayout->addWidget(lineEdit_send);

        ptn_send = new QPushButton(ClientWidget);
        ptn_send->setObjectName(QString::fromUtf8("ptn_send"));

        horizontalLayout->addWidget(ptn_send);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ClientWidget);

        QMetaObject::connectSlotsByName(ClientWidget);
    } // setupUi

    void retranslateUi(QWidget *ClientWidget)
    {
        ClientWidget->setWindowTitle(QCoreApplication::translate("ClientWidget", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("ClientWidget", "Address\357\274\232", nullptr));
        lineEdit_address->setText(QCoreApplication::translate("ClientWidget", "localhost", nullptr));
        label->setText(QCoreApplication::translate("ClientWidget", "Port\357\274\232", nullptr));
        ptn_connect->setText(QCoreApplication::translate("ClientWidget", "Connect", nullptr));
        ptn_disConnect->setText(QCoreApplication::translate("ClientWidget", "Disconnect", nullptr));
        ptn_send->setText(QCoreApplication::translate("ClientWidget", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientWidget: public Ui_ClientWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTWIDGET_H
