/********************************************************************************
** Form generated from reading UI file 'record.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECORD_H
#define UI_RECORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Record
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QWidget *Record)
    {
        if (Record->objectName().isEmpty())
            Record->setObjectName(QStringLiteral("Record"));
        Record->resize(499, 538);
        label = new QLabel(Record);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 10, 251, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(26);
        label->setFont(font);
        label_2 = new QLabel(Record);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 210, 101, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(14);
        label_2->setFont(font1);
        label_3 = new QLabel(Record);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(350, 210, 101, 31));
        label_3->setFont(font1);
        label_4 = new QLabel(Record);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 380, 101, 31));
        label_4->setFont(font1);
        label_5 = new QLabel(Record);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(350, 370, 101, 31));
        label_5->setFont(font1);

        retranslateUi(Record);

        QMetaObject::connectSlotsByName(Record);
    } // setupUi

    void retranslateUi(QWidget *Record)
    {
        Record->setWindowTitle(QApplication::translate("Record", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("Record", "\350\277\236\350\277\236\347\234\213\346\216\222\350\241\214\346\246\234", Q_NULLPTR));
        label_2->setText(QApplication::translate("Record", "\346\270\270\346\210\217ID\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("Record", "\347\216\251\345\256\266\344\272\272\346\225\260\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("Record", "\346\216\222\345\220\215\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("Record", "\347\247\257\345\210\206\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Record: public Ui_Record {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECORD_H
