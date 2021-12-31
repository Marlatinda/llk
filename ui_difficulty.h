/********************************************************************************
** Form generated from reading UI file 'difficulty.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIFFICULTY_H
#define UI_DIFFICULTY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Difficulty
{
public:

    void setupUi(QWidget *Difficulty)
    {
        if (Difficulty->objectName().isEmpty())
            Difficulty->setObjectName(QStringLiteral("Difficulty"));
        Difficulty->resize(400, 300);

        retranslateUi(Difficulty);

        QMetaObject::connectSlotsByName(Difficulty);
    } // setupUi

    void retranslateUi(QWidget *Difficulty)
    {
        Difficulty->setWindowTitle(QApplication::translate("Difficulty", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Difficulty: public Ui_Difficulty {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIFFICULTY_H
