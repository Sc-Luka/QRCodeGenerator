/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *Text;
    QLineEdit *UserInput;
    QPushButton *GenarateQR;
    QPushButton *Clear;
    QLabel *qrLabel;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(732, 527);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: #82999f;\n"
"\n"
""));
        Text = new QLineEdit(centralwidget);
        Text->setObjectName(QString::fromUtf8("Text"));
        Text->setGeometry(QRect(180, 10, 341, 45));
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        font.setItalic(true);
        Text->setFont(font);
        Text->setCursor(QCursor(Qt::ArrowCursor));
        Text->setAutoFillBackground(false);
        Text->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    color: black;\n"
"    background-color: #82999f;\n"
"    border: none;\n"
"    outline: none;\n"
"}\n"
""));
        Text->setAlignment(Qt::AlignCenter);
        Text->setDragEnabled(false);
        Text->setReadOnly(true);
        UserInput = new QLineEdit(centralwidget);
        UserInput->setObjectName(QString::fromUtf8("UserInput"));
        UserInput->setGeometry(QRect(60, 110, 611, 26));
        UserInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    color: black;\n"
"    background-color: #82999f;\n"
"    border: 1px solid #CCCCCC;\n"
"    border-radius: 6px;\n"
"    padding: 4px;\n"
"}\n"
""));
        GenarateQR = new QPushButton(centralwidget);
        GenarateQR->setObjectName(QString::fromUtf8("GenarateQR"));
        GenarateQR->setGeometry(QRect(570, 460, 131, 26));
        GenarateQR->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: black;\n"
"    background-color: #82999f;\n"
"    border: 1px solid #CCCCCC;\n"
"    border-radius: 6px;\n"
"    padding: 6px 12px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #D6D6D6;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #C0C0C0;\n"
"}\n"
""));
        Clear = new QPushButton(centralwidget);
        Clear->setObjectName(QString::fromUtf8("Clear"));
        Clear->setGeometry(QRect(40, 460, 131, 26));
        Clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: black;\n"
"    background-color: #82999f;\n"
"    border: 1px solid #CCCCCC;\n"
"    border-radius: 6px;\n"
"    padding: 6px 12px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #D6D6D6;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #C0C0C0;\n"
"}\n"
""));
        qrLabel = new QLabel(centralwidget);
        qrLabel->setObjectName(QString::fromUtf8("qrLabel"));
        qrLabel->setEnabled(true);
        qrLabel->setGeometry(QRect(210, 150, 300, 300));
        qrLabel->setMinimumSize(QSize(300, 300));
        qrLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: #82999f;\n"
"    border: 1px solid #CCCCCC;\n"
"    border-radius: 6px;\n"
"}\n"
""));
        qrLabel->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 732, 23));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Text->setText(QCoreApplication::translate("MainWindow", "QR Code Generator", nullptr));
        UserInput->setText(QString());
        UserInput->setPlaceholderText(QString());
        GenarateQR->setText(QCoreApplication::translate("MainWindow", "Generator QR", nullptr));
        Clear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        qrLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
