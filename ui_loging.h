/********************************************************************************
** Form generated from reading UI file 'loging.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGING_H
#define UI_LOGING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loging
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *account;
    QLineEdit *password;
    QLabel *label_3;
    QLabel *infor;

    void setupUi(QWidget *loging)
    {
        if (loging->objectName().isEmpty())
            loging->setObjectName(QStringLiteral("loging"));
        loging->resize(415, 411);
        loging->setStyleSheet(QStringLiteral(""));
        pushButton = new QPushButton(loging);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(270, 120, 101, 31));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QLatin1String("\n"
"background-color: rgba(180, 232,252,0.8);\n"
"border-radius:150px; \n"
""));
        pushButton_2 = new QPushButton(loging);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(240, 220, 101, 31));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QLatin1String("border-radius:150px;\n"
"background-color: rgba(180, 232,252,0.8);"));
        pushButton_3 = new QPushButton(loging);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(280, 330, 101, 31));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QLatin1String("border-radius:150px;\n"
"background-color: rgba(180, 232,252,0.8);"));
        label = new QLabel(loging);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 100, 101, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setWeight(50);
        label->setFont(font1);
        label_2 = new QLabel(loging);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 210, 81, 31));
        label_2->setFont(font1);
        account = new QLineEdit(loging);
        account->setObjectName(QStringLiteral("account"));
        account->setGeometry(QRect(10, 140, 181, 31));
        account->setStyleSheet(QStringLiteral("background-color: rgba(180, 232,232,0.8);"));
        password = new QLineEdit(loging);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(10, 270, 181, 31));
        password->setStyleSheet(QStringLiteral("background-color: rgba(180, 232,232,0.8);"));
        label_3 = new QLabel(loging);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 20, 221, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(26);
        label_3->setFont(font2);
        infor = new QLabel(loging);
        infor->setObjectName(QStringLiteral("infor"));
        infor->setGeometry(QRect(10, 320, 251, 41));
        infor->setFont(font1);

        retranslateUi(loging);

        QMetaObject::connectSlotsByName(loging);
    } // setupUi

    void retranslateUi(QWidget *loging)
    {
        loging->setWindowTitle(QApplication::translate("loging", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("loging", "\347\231\273\345\275\225", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("loging", "\346\263\250\345\206\214", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("loging", "\351\200\200\345\207\272", Q_NULLPTR));
        label->setText(QApplication::translate("loging", "\350\264\246\345\217\267\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("loging", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("loging", "\350\266\263\347\220\203\350\277\236\350\277\236\347\234\213", Q_NULLPTR));
        infor->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class loging: public Ui_loging {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGING_H
