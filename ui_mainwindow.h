/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actNewGame;
    QAction *actExit;
    QAction *actAbout;
    QAction *actSave;
    QAction *actRercord;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QSplitter *splitter;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QProgressBar *progressBar;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QLCDNumber *lcdNumber;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menuBar;
    QMenu *menulinkm_eup;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(941, 703);
        MainWindow->setStyleSheet(QStringLiteral(""));
        actNewGame = new QAction(MainWindow);
        actNewGame->setObjectName(QStringLiteral("actNewGame"));
        actExit = new QAction(MainWindow);
        actExit->setObjectName(QStringLiteral("actExit"));
        actAbout = new QAction(MainWindow);
        actAbout->setObjectName(QStringLiteral("actAbout"));
        actSave = new QAction(MainWindow);
        actSave->setObjectName(QStringLiteral("actSave"));
        actRercord = new QAction(MainWindow);
        actRercord->setObjectName(QStringLiteral("actRercord"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(0, 100));
        groupBox->setMaximumSize(QSize(16777215, 100));
        groupBox->setStyleSheet(QStringLiteral("background-color: rgba(179, 179,29,0.7);"));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        progressBar = new QProgressBar(groupBox);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMinimumSize(QSize(400, 0));
        QFont font;
        font.setPointSize(16);
        progressBar->setFont(font);
        progressBar->setStyleSheet(QStringLiteral("background-color: rgba(80, 80,245,0.9);"));
        progressBar->setValue(0);

        horizontalLayout_2->addWidget(progressBar);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("background-color: rgba(192, 21,21,0.8);"));

        horizontalLayout_2->addWidget(label_2);

        lcdNumber = new QLCDNumber(groupBox);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setMinimumSize(QSize(300, 0));
        lcdNumber->setFont(font);
        lcdNumber->setStyleSheet(QStringLiteral("background-color: rgba(80, 80,245,0.8);"));
        lcdNumber->setDigitCount(9);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_2->addWidget(lcdNumber);


        gridLayout_4->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        splitter->addWidget(groupBox);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setStyleSheet(QStringLiteral(""));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));

        horizontalLayout->addLayout(gridLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        gridLayout_3->addLayout(verticalLayout, 0, 0, 1, 1);

        splitter->addWidget(groupBox_2);

        gridLayout_2->addWidget(splitter, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 941, 23));
        menulinkm_eup = new QMenu(menuBar);
        menulinkm_eup->setObjectName(QStringLiteral("menulinkm_eup"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menulinkm_eup->menuAction());
        menulinkm_eup->addAction(actNewGame);
        menulinkm_eup->addAction(actSave);
        menulinkm_eup->addAction(actAbout);
        menulinkm_eup->addSeparator();
        menulinkm_eup->addAction(actExit);

        retranslateUi(MainWindow);
        QObject::connect(actExit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\350\266\263\347\220\203\350\277\236\350\277\236\347\234\213", Q_NULLPTR));
        actNewGame->setText(QApplication::translate("MainWindow", " \346\226\260\346\270\270\346\210\217", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actNewGame->setToolTip(QApplication::translate("MainWindow", "\346\226\260\345\274\200\344\270\200\345\261\200", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actExit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272\346\270\270\346\210\217", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actExit->setToolTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272\346\270\270\346\210\217", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actAbout->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actAbout->setToolTip(QApplication::translate("MainWindow", "\345\205\263\344\272\216linkmeup", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actSave->setText(QApplication::translate("MainWindow", "\346\216\222\350\241\214\346\246\234", Q_NULLPTR));
        actRercord->setText(QApplication::translate("MainWindow", "\346\216\222\350\241\214\346\246\234", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "\347\212\266\346\200\201", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\347\224\250\346\227\266\357\274\232", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\346\270\270\346\210\217", Q_NULLPTR));
        menulinkm_eup->setTitle(QApplication::translate("MainWindow", "\346\270\270\346\210\217\351\200\211\351\241\271", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
