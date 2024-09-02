/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QLabel *lbl_wrong_2;
    QTextEdit *textWrong;
    QPushButton *btnCopy;
    QTextEdit *textCorrect;
    QLabel *lbl_correct;
    QPushButton *btnCorrect;
    QPushButton *brnClose;
    QPushButton *btn_clear;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(571, 358);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 10, 550, 300));
        QFont font;
        font.setBold(true);
        widget->setFont(font);
        widget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background:#101c18;\n"
"border-radius:25px;\n"
"}"));
        lbl_wrong_2 = new QLabel(widget);
        lbl_wrong_2->setObjectName("lbl_wrong_2");
        lbl_wrong_2->setGeometry(QRect(40, 20, 121, 31));
        lbl_wrong_2->setFont(font);
        lbl_wrong_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"font-size:20px;\n"
"}"));
        textWrong = new QTextEdit(widget);
        textWrong->setObjectName("textWrong");
        textWrong->setGeometry(QRect(40, 60, 481, 61));
        QFont font1;
        font1.setPointSize(12);
        textWrong->setFont(font1);
        textWrong->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"background:#d3ede4;\n"
"border-radius:5px;\n"
"color:black;\n"
"}"));
        btnCopy = new QPushButton(widget);
        btnCopy->setObjectName("btnCopy");
        btnCopy->setGeometry(QRect(130, 250, 101, 31));
        btnCopy->setFont(font);
        btnCopy->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        btnCopy->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:#728f85;\n"
"color:white;\n"
"font-size:15px;\n"
"border: 1px solid white;\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background:#33544b;\n"
"}"));
        textCorrect = new QTextEdit(widget);
        textCorrect->setObjectName("textCorrect");
        textCorrect->setGeometry(QRect(40, 170, 481, 61));
        textCorrect->setFont(font1);
        textCorrect->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"background:#d3ede4;\n"
"border-radius:5px;\n"
"color:black;\n"
"}"));
        textCorrect->setReadOnly(true);
        lbl_correct = new QLabel(widget);
        lbl_correct->setObjectName("lbl_correct");
        lbl_correct->setGeometry(QRect(40, 130, 121, 31));
        lbl_correct->setFont(font);
        lbl_correct->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"font-size:20px;\n"
"}"));
        btnCorrect = new QPushButton(widget);
        btnCorrect->setObjectName("btnCorrect");
        btnCorrect->setGeometry(QRect(340, 250, 101, 31));
        btnCorrect->setFont(font);
        btnCorrect->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        btnCorrect->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:#728f85;\n"
"color:white;\n"
"font-size:15px;\n"
"border: 1px solid white;\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background:#33544b;\n"
"}"));
        brnClose = new QPushButton(widget);
        brnClose->setObjectName("brnClose");
        brnClose->setGeometry(QRect(500, 10, 31, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial Black")});
        font2.setPointSize(12);
        font2.setBold(true);
        brnClose->setFont(font2);
        brnClose->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        brnClose->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:#ed3752;\n"
"border-radius:5px;\n"
"border:1px solid white;\n"
"color:white; \n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background:#fa5757;\n"
"}"));
        btn_clear = new QPushButton(widget);
        btn_clear->setObjectName("btn_clear");
        btn_clear->setGeometry(QRect(40, 250, 80, 31));
        btn_clear->setFont(font);
        btn_clear->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        btn_clear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:#728f85;\n"
"color:white;\n"
"font-size:15px;\n"
"border: 1px solid white;\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background:#33544b;\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 571, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lbl_wrong_2->setText(QCoreApplication::translate("MainWindow", "Wrong Text", nullptr));
        btnCopy->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\320\276\320\277\321\226\321\216\320\262\320\260\321\202\320\270", nullptr));
        lbl_correct->setText(QCoreApplication::translate("MainWindow", "Correct Text", nullptr));
        btnCorrect->setText(QCoreApplication::translate("MainWindow", "\320\222\320\270\320\277\321\200\320\260\320\262\320\270\321\202\320\270", nullptr));
        brnClose->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        btn_clear->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
