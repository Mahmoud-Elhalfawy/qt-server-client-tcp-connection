/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QTextEdit *textEditIP;
    QTextEdit *textEditPort;
    QLabel *label_2;
    QPushButton *pushButtonConnect;
    QTextEdit *textEditMesage;
    QLabel *label_3;
    QPushButton *pushButtonSend;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(517, 338);
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 61, 16));
        textEditIP = new QTextEdit(Dialog);
        textEditIP->setObjectName(QString::fromUtf8("textEditIP"));
        textEditIP->setGeometry(QRect(110, 20, 281, 31));
        textEditPort = new QTextEdit(Dialog);
        textEditPort->setObjectName(QString::fromUtf8("textEditPort"));
        textEditPort->setGeometry(QRect(110, 70, 281, 31));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 70, 61, 16));
        pushButtonConnect = new QPushButton(Dialog);
        pushButtonConnect->setObjectName(QString::fromUtf8("pushButtonConnect"));
        pushButtonConnect->setGeometry(QRect(310, 120, 75, 23));
        textEditMesage = new QTextEdit(Dialog);
        textEditMesage->setObjectName(QString::fromUtf8("textEditMesage"));
        textEditMesage->setGeometry(QRect(110, 190, 281, 31));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 190, 61, 16));
        pushButtonSend = new QPushButton(Dialog);
        pushButtonSend->setObjectName(QString::fromUtf8("pushButtonSend"));
        pushButtonSend->setGeometry(QRect(310, 240, 75, 23));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QApplication::translate("Dialog", "<html><head/><body><p>IP Address</p></body></html>", nullptr));
        label_2->setText(QApplication::translate("Dialog", "<html><head/><body><p>Port</p></body></html>", nullptr));
        pushButtonConnect->setText(QApplication::translate("Dialog", "Connect", nullptr));
        label_3->setText(QApplication::translate("Dialog", "<html><head/><body><p>Message</p></body></html>", nullptr));
        pushButtonSend->setText(QApplication::translate("Dialog", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
