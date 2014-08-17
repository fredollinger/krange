/********************************************************************************
** Form generated from reading UI file 'krwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KRWINDOW_H
#define UI_KRWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KRWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QWidget *tab_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *KRWindow)
    {
        if (KRWindow->objectName().isEmpty())
            KRWindow->setObjectName(QStringLiteral("KRWindow"));
        KRWindow->resize(800, 600);
        centralwidget = new QWidget(KRWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(40, 30, 331, 371));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayoutWidget = new QWidget(tab);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 331, 351));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        KRWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(KRWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        KRWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(KRWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        KRWindow->setStatusBar(statusbar);

        retranslateUi(KRWindow);

        QMetaObject::connectSlotsByName(KRWindow);
    } // setupUi

    void retranslateUi(QMainWindow *KRWindow)
    {
        KRWindow->setWindowTitle(QApplication::translate("KRWindow", "MainWindow", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("KRWindow", "Tab 1", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("KRWindow", "Tab 2", 0));
    } // retranslateUi

};

namespace Ui {
    class KRWindow: public Ui_KRWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KRWINDOW_H
