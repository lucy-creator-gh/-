/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actNew;
    QAction *actabout;
    QAction *actOpen;
    QAction *actClear;
    QAction *actCut;
    QAction *actCopy;
    QAction *actPaste;
    QAction *actFontItalic;
    QAction *actFontBold;
    QAction *actFontUnder;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actNew = new QAction(MainWindow);
        actNew->setObjectName("actNew");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/new2.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actNew->setIcon(icon);
        actNew->setMenuRole(QAction::MenuRole::NoRole);
        actabout = new QAction(MainWindow);
        actabout->setObjectName("actabout");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/BLD.BMP"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actabout->setIcon(icon1);
        actabout->setMenuRole(QAction::MenuRole::NoRole);
        actOpen = new QAction(MainWindow);
        actOpen->setObjectName("actOpen");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/open3.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actOpen->setIcon(icon2);
        actOpen->setMenuRole(QAction::MenuRole::NoRole);
        actClear = new QAction(MainWindow);
        actClear->setObjectName("actClear");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/images/103.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actClear->setIcon(icon3);
        actClear->setMenuRole(QAction::MenuRole::NoRole);
        actCut = new QAction(MainWindow);
        actCut->setObjectName("actCut");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/images/cut.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actCut->setIcon(icon4);
        actCut->setMenuRole(QAction::MenuRole::NoRole);
        actCopy = new QAction(MainWindow);
        actCopy->setObjectName("actCopy");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/images/120.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actCopy->setIcon(icon5);
        actCopy->setMenuRole(QAction::MenuRole::NoRole);
        actPaste = new QAction(MainWindow);
        actPaste->setObjectName("actPaste");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/images/paste.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actPaste->setIcon(icon6);
        actPaste->setMenuRole(QAction::MenuRole::NoRole);
        actFontItalic = new QAction(MainWindow);
        actFontItalic->setObjectName("actFontItalic");
        actFontItalic->setCheckable(true);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/images/ITL.BMP"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actFontItalic->setIcon(icon7);
        actFontItalic->setMenuRole(QAction::MenuRole::NoRole);
        actFontBold = new QAction(MainWindow);
        actFontBold->setObjectName("actFontBold");
        actFontBold->setCheckable(true);
        actFontBold->setIcon(icon1);
        actFontBold->setMenuRole(QAction::MenuRole::NoRole);
        actFontUnder = new QAction(MainWindow);
        actFontUnder->setObjectName("actFontUnder");
        actFontUnder->setCheckable(true);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/images/WORDUNDR.BMP"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actFontUnder->setIcon(icon8);
        actFontUnder->setMenuRole(QAction::MenuRole::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(220, 70, 291, 131));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName("menu_3");
        menu_4 = new QMenu(menubar);
        menu_4->setObjectName("menu_4");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        toolBar->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menubar->addAction(menu_4->menuAction());
        toolBar->addAction(actNew);
        toolBar->addAction(actabout);
        toolBar->addAction(actOpen);
        toolBar->addAction(actClear);
        toolBar->addSeparator();
        toolBar->addAction(actCut);
        toolBar->addAction(actCopy);
        toolBar->addAction(actPaste);
        toolBar->addSeparator();
        toolBar->addAction(actFontItalic);
        toolBar->addAction(actFontBold);
        toolBar->addAction(actFontUnder);
        toolBar->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actNew->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272", nullptr));
#if QT_CONFIG(tooltip)
        actNew->setToolTip(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
        actabout->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
#if QT_CONFIG(tooltip)
        actabout->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
#endif // QT_CONFIG(tooltip)
        actOpen->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        actClear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272", nullptr));
        actCut->setText(QCoreApplication::translate("MainWindow", "\345\211\252\345\210\207", nullptr));
        actCopy->setText(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266", nullptr));
        actPaste->setText(QCoreApplication::translate("MainWindow", "\347\262\230\350\264\264", nullptr));
        actFontItalic->setText(QCoreApplication::translate("MainWindow", "\346\226\234\344\275\223", nullptr));
        actFontBold->setText(QCoreApplication::translate("MainWindow", "\347\262\227\344\275\223", nullptr));
        actFontUnder->setText(QCoreApplication::translate("MainWindow", "\344\270\213\345\210\222\347\272\277", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainWindow", "\346\240\274\345\274\217", nullptr));
        menu_4->setTitle(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
