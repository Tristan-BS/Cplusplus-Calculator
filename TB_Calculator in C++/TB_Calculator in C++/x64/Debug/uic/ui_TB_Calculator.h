/********************************************************************************
** Form generated from reading UI file 'TB_Calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TB_CALCULATOR_H
#define UI_TB_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TB_CalculatorClass
{
public:
    QWidget *Calculate;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *binaer;
    QPushButton *dez;
    QPushButton *wurzel;
    QPushButton *quadrieren;
    QLineEdit *eingabefeld;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout;
    QPushButton *eins;
    QPushButton *istgleich;
    QPushButton *komma;
    QPushButton *neun;
    QPushButton *zwei;
    QPushButton *drei;
    QPushButton *sieben;
    QPushButton *null_2;
    QPushButton *acht;
    QPushButton *fuenf;
    QPushButton *sechs;
    QPushButton *vier;
    QPushButton *dividiert;
    QPushButton *mal;
    QPushButton *minus;
    QPushButton *plus;
    QPushButton *clear;
    QPushButton *del;
    QLabel *INFO;

    void setupUi(QMainWindow *TB_CalculatorClass)
    {
        if (TB_CalculatorClass->objectName().isEmpty())
            TB_CalculatorClass->setObjectName("TB_CalculatorClass");
        TB_CalculatorClass->resize(755, 708);
        Calculate = new QWidget(TB_CalculatorClass);
        Calculate->setObjectName("Calculate");
        layoutWidget = new QWidget(Calculate);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(179, 110, 381, 52));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        binaer = new QPushButton(layoutWidget);
        binaer->setObjectName("binaer");
        binaer->setMinimumSize(QSize(0, 50));
        binaer->setMaximumSize(QSize(135, 50));
        QFont font;
        font.setPointSize(16);
        binaer->setFont(font);
        binaer->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 15px;\n"
"border-color: white;\n"
"background-color: white;\n"
"padding: 4px;\n"
"}\n"
"QPushButton:focus {\n"
"border: 2px solid rgb(227, 227, 227)\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(217, 217, 217);\n"
"	border-color: black;\n"
"}"));

        horizontalLayout->addWidget(binaer);

        dez = new QPushButton(layoutWidget);
        dez->setObjectName("dez");
        dez->setMinimumSize(QSize(0, 50));
        dez->setMaximumSize(QSize(135, 50));
        dez->setFont(font);
        dez->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 15px;\n"
"border-color: white;\n"
"background-color: white;\n"
"padding: 4px;\n"
"}\n"
"QPushButton:focus {\n"
"border: 2px solid rgb(227, 227, 227)\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(217, 217, 217);\n"
"	border-color: black;\n"
"}"));

        horizontalLayout->addWidget(dez);

        wurzel = new QPushButton(layoutWidget);
        wurzel->setObjectName("wurzel");
        wurzel->setMinimumSize(QSize(0, 50));
        QFont font1;
        font1.setPointSize(12);
        wurzel->setFont(font1);
        wurzel->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 15px;\n"
"border-color: white;\n"
"background-color: white;\n"
"padding: 4px;\n"
"}\n"
"QPushButton:focus {\n"
"border: 2px solid rgb(227, 227, 227)\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(217, 217, 217);\n"
"	border-color: black;\n"
"}"));

        horizontalLayout->addWidget(wurzel);

        quadrieren = new QPushButton(layoutWidget);
        quadrieren->setObjectName("quadrieren");
        quadrieren->setMinimumSize(QSize(0, 50));
        quadrieren->setFont(font1);
        quadrieren->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 15px;\n"
"border-color: white;\n"
"background-color: white;\n"
"padding: 4px;\n"
"}\n"
"QPushButton:focus {\n"
"border: 2px solid rgb(227, 227, 227)\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(217, 217, 217);\n"
"	border-color: black;\n"
"}"));

        horizontalLayout->addWidget(quadrieren);

        eingabefeld = new QLineEdit(Calculate);
        eingabefeld->setObjectName("eingabefeld");
        eingabefeld->setGeometry(QRect(180, 50, 405, 50));
        eingabefeld->setMaximumSize(QSize(405, 50));
        QFont font2;
        font2.setPointSize(15);
        eingabefeld->setFont(font2);
        eingabefeld->setLayoutDirection(Qt::LeftToRight);
        eingabefeld->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 15px;\n"
"border-color: white;\n"
"background-color: white;\n"
"padding: 4px;\n"
"}\n"
"\n"
"QLineEdit:hover{\n"
"	background-color: rgb(217, 217, 217);\n"
"	border-color: black;\n"
"}\n"
"QLineEdit:focus{\n"
"	background-color: rgb(217, 217, 217);\n"
"	border-color: black;\n"
"}"));
        eingabefeld->setAlignment(Qt::AlignCenter);
        layoutWidget_2 = new QWidget(Calculate);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(180, 180, 382, 451));
        gridLayout = new QGridLayout(layoutWidget_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        eins = new QPushButton(layoutWidget_2);
        eins->setObjectName("eins");
        eins->setMinimumSize(QSize(100, 100));
        eins->setMaximumSize(QSize(100, 100));
        eins->setFont(font);
        eins->setMouseTracking(true);
        eins->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 15px;\n"
"border-color: white;\n"
"background-color: white;\n"
"padding: 4px;\n"
"}\n"
"QPushButton:focus {\n"
"border: 2px solid rgb(227, 227, 227)\n"
"}\n"
"QPushButton:hover{\n"
"	\n"
"	background-color: rgb(217, 217, 217);\n"
"	border-color: black;\n"
"}"));

        gridLayout->addWidget(eins, 4, 0, 2, 1);

        istgleich = new QPushButton(layoutWidget_2);
        istgleich->setObjectName("istgleich");
        istgleich->setMinimumSize(QSize(0, 50));
        istgleich->setFont(font);
        istgleich->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 15px;\n"
"border-color: white;\n"
"background-color: white;\n"
"padding: 4px;\n"
"}\n"
"QPushButton:focus {\n"
"border: 2px solid rgb(227, 227, 227)\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(217, 217, 217);\n"
"	border-color: black;\n"
"}"));

        gridLayout->addWidget(istgleich, 8, 3, 1, 1);

        komma = new QPushButton(layoutWidget_2);
        komma->setObjectName("komma");
        komma->setMinimumSize(QSize(100, 100));
        komma->setMaximumSize(QSize(100, 100));
        komma->setFont(font);
        komma->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 15px;\n"
"border-color: white;\n"
"background-color: white;\n"
"padding: 4px;\n"
"}\n"
"QPushButton:focus {\n"
"border: 2px solid rgb(227, 227, 227)\n"
"}\n"
"QPushButton:hover{\n"
"	\n"
"	background-color: rgb(217, 217, 217);\n"
"	border-color: black;\n"
"}"));

        gridLayout->addWidget(komma, 8, 2, 1, 1);

        neun = new QPushButton(layoutWidget_2);
        neun->setObjectName("neun");
        neun->setMinimumSize(QSize(100, 100));
        neun->setMaximumSize(QSize(100, 100));
        neun->setFont(font);
        neun->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 15px;\n"
"border-color: white;\n"
"background-color: white;\n"
"padding: 4px;\n"
"}\n"
"QPushButton:focus {\n"
"border: 2px solid rgb(227, 227, 227)\n"
"}\n"
"QPushButton:hover{\n"
"	\n"
"	background-color: rgb(217, 217, 217);\n"
"	border-color: black;\n"
"}"));

        gridLayout->addWidget(neun, 0, 2, 2, 1);

        zwei = new QPushButton(layoutWidget_2);
        zwei->setObjectName("zwei");
        zwei->setMinimumSize(QSize(100, 100));
        zwei->setMaximumSize(QSize(100, 100));
        QFont font3;
        font3.setPointSize(16);
        font3.setBold(false);
        zwei->setFont(font3);
        zwei->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 15px;\n"
"border-color: white;\n"
"background-color: white;\n"
"padding: 4px;\n"
"}\n"
"QPushButton:focus {\n"
"border: 2px solid rgb(227, 227, 227)\n"
"}\n"
"QPushButton:hover{\n"
"	\n"
"	background-color: rgb(217, 217, 217);\n"
"	border-color: black;\n"
"}"));

        gridLayout->addWidget(zwei, 4, 1, 2, 1);

        drei = new QPushButton(layoutWidget_2);
        drei->setObjectName("drei");
        drei->setMinimumSize(QSize(100, 100));
        drei->setMaximumSize(QSize(100, 100));
        drei->setFont(font);
        drei->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 15px;\n"
"border-color: white;\n"
"background-color: white;\n"
"padding: 4px;\n"
"}\n"
"QPushButton:focus {\n"
"border: 2px solid rgb(227, 227, 227)\n"
"}\n"
"QPushButton:hover{\n"
"	\n"
"	background-color: rgb(217, 217, 217);\n"
"	border-color: black;\n"
"}"));

        gridLayout->addWidget(drei, 4, 2, 2, 1);

        sieben = new QPushButton(layoutWidget_2);
        sieben->setObjectName("sieben");
        sieben->setMinimumSize(QSize(100, 100));
        sieben->setMaximumSize(QSize(100, 100));
        sieben->setFont(font);
        sieben->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 15px;\n"
"border-color: white;\n"
"background-color: white;\n"
"padding: 4px;\n"
"}\n"
"QPushButton:focus {\n"
"border: 2px solid rgb(227, 227, 227)\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(217, 217, 217);\n"
"	border-color: black;\n"
"}"));

        gridLayout->addWidget(sieben, 0, 0, 2, 1);

        null_2 = new QPushButton(layoutWidget_2);
        null_2->setObjectName("null_2");
        null_2->setEnabled(true);
        null_2->setMinimumSize(QSize(100, 100));
        null_2->setMaximumSize(QSize(100, 100));
        null_2->setFont(font);
        null_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 15px;\n"
"border-color: white;\n"
"background-color: white;\n"
"padding: 4px;\n"
"}\n"
"QPushButton:focus {\n"
"border: 2px solid rgb(227, 227, 227)\n"
"}\n"
"QPushButton:hover{\n"
"	\n"
"	background-color: rgb(217, 217, 217);\n"
"	border-color: black;\n"
"}"));

        gridLayout->addWidget(null_2, 8, 1, 1, 1);

        acht = new QPushButton(layoutWidget_2);
        acht->setObjectName("acht");
        acht->setMinimumSize(QSize(100, 100));
        acht->setMaximumSize(QSize(100, 100));
        acht->setFont(font);
        acht->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 15px;\n"
"border-color: white;\n"
"background-color: white;\n"
"padding: 4px;\n"
"}\n"
"QPushButton:focus {\n"
"border: 2px solid rgb(227, 227, 227)\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(217, 217, 217);\n"
"	border-color: black;\n"
"}"));

        gridLayout->addWidget(acht, 0, 1, 2, 1);

        fuenf = new QPushButton(layoutWidget_2);
        fuenf->setObjectName("fuenf");
        fuenf->setMinimumSize(QSize(100, 100));
        fuenf->setMaximumSize(QSize(100, 100));
        fuenf->setFont(font);
        fuenf->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 15px;\n"
"border-color: white;\n"
"background-color: white;\n"
"padding: 4px;\n"
"}\n"
"QPushButton:focus {\n"
"border: 2px solid rgb(227, 227, 227)\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(217, 217, 217);\n"
"	border-color: black;\n"
"}"));

        gridLayout->addWidget(fuenf, 2, 1, 2, 1);

        sechs = new QPushButton(layoutWidget_2);
        sechs->setObjectName("sechs");
        sechs->setMinimumSize(QSize(100, 100));
        sechs->setMaximumSize(QSize(100, 100));
        sechs->setFont(font);
        sechs->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 15px;\n"
"border-color: white;\n"
"background-color: white;\n"
"padding: 4px;\n"
"}\n"
"QPushButton:focus {\n"
"border: 2px solid rgb(227, 227, 227)\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(217, 217, 217);\n"
"	border-color: black;\n"
"}"));

        gridLayout->addWidget(sechs, 2, 2, 2, 1);

        vier = new QPushButton(layoutWidget_2);
        vier->setObjectName("vier");
        vier->setMinimumSize(QSize(100, 100));
        vier->setMaximumSize(QSize(100, 100));
        vier->setFont(font);
        vier->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 15px;\n"
"border-color: white;\n"
"background-color: white;\n"
"padding: 4px;\n"
"}\n"
"QPushButton:focus {\n"
"border: 2px solid rgb(227, 227, 227)\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(217, 217, 217);\n"
"	border-color: black;\n"
"}"));

        gridLayout->addWidget(vier, 2, 0, 2, 1);

        dividiert = new QPushButton(layoutWidget_2);
        dividiert->setObjectName("dividiert");
        dividiert->setMinimumSize(QSize(0, 50));
        dividiert->setFont(font);
        dividiert->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 15px;\n"
"border-color: white;\n"
"background-color: white;\n"
"padding: 4px;\n"
"}\n"
"QPushButton:focus {\n"
"border: 2px solid rgb(227, 227, 227)\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(217, 217, 217);\n"
"	border-color: black;\n"
"}"));

        gridLayout->addWidget(dividiert, 5, 3, 1, 1);

        mal = new QPushButton(layoutWidget_2);
        mal->setObjectName("mal");
        mal->setMinimumSize(QSize(0, 50));
        mal->setFont(font);
        mal->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 15px;\n"
"border-color: white;\n"
"background-color: white;\n"
"padding: 4px;\n"
"}\n"
"QPushButton:focus {\n"
"border: 2px solid rgb(227, 227, 227)\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(217, 217, 217);\n"
"	border-color: black;\n"
"}"));

        gridLayout->addWidget(mal, 4, 3, 1, 1);

        minus = new QPushButton(layoutWidget_2);
        minus->setObjectName("minus");
        minus->setMinimumSize(QSize(0, 50));
        minus->setFont(font);
        minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 15px;\n"
"border-color: white;\n"
"background-color: white;\n"
"padding: 4px;\n"
"}\n"
"QPushButton:focus {\n"
"border: 2px solid rgb(227, 227, 227)\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(217, 217, 217);\n"
"	border-color: black;\n"
"}"));

        gridLayout->addWidget(minus, 3, 3, 1, 1);

        plus = new QPushButton(layoutWidget_2);
        plus->setObjectName("plus");
        plus->setMinimumSize(QSize(0, 50));
        plus->setFont(font);
        plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 15px;\n"
"border-color: white;\n"
"background-color: white;\n"
"padding: 4px;\n"
"}\n"
"QPushButton:focus {\n"
"border: 2px solid rgb(227, 227, 227)\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(217, 217, 217);\n"
"	border-color: black;\n"
"}"));

        gridLayout->addWidget(plus, 2, 3, 1, 1);

        clear = new QPushButton(layoutWidget_2);
        clear->setObjectName("clear");
        clear->setMinimumSize(QSize(0, 50));
        clear->setFont(font);
        clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 15px;\n"
"border-color: white;\n"
"background-color: white;\n"
"padding: 4px;\n"
"}\n"
"QPushButton:focus {\n"
"border: 2px solid rgb(227, 227, 227)\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(217, 217, 217);\n"
"	border-color: black;\n"
"}"));

        gridLayout->addWidget(clear, 1, 3, 1, 1);

        del = new QPushButton(layoutWidget_2);
        del->setObjectName("del");
        del->setMinimumSize(QSize(0, 50));
        del->setFont(font);
        del->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 15px;\n"
"border-color: white;\n"
"background-color: white;\n"
"padding: 4px;\n"
"}\n"
"QPushButton:focus {\n"
"border: 2px solid rgb(227, 227, 227)\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(217, 217, 217);\n"
"	border-color: black;\n"
"}"));

        gridLayout->addWidget(del, 0, 3, 1, 1);

        INFO = new QLabel(Calculate);
        INFO->setObjectName("INFO");
        INFO->setGeometry(QRect(190, 0, 391, 31));
        INFO->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        TB_CalculatorClass->setCentralWidget(Calculate);

        retranslateUi(TB_CalculatorClass);

        QMetaObject::connectSlotsByName(TB_CalculatorClass);
    } // setupUi

    void retranslateUi(QMainWindow *TB_CalculatorClass)
    {
        TB_CalculatorClass->setWindowTitle(QCoreApplication::translate("TB_CalculatorClass", "TB_Calculator", nullptr));
        binaer->setText(QCoreApplication::translate("TB_CalculatorClass", "dez -> bin", nullptr));
        dez->setText(QCoreApplication::translate("TB_CalculatorClass", "bin -> dez", nullptr));
        wurzel->setText(QCoreApplication::translate("TB_CalculatorClass", "\342\210\232", nullptr));
        quadrieren->setText(QCoreApplication::translate("TB_CalculatorClass", "^", nullptr));
        eingabefeld->setText(QString());
        eins->setText(QCoreApplication::translate("TB_CalculatorClass", "1", nullptr));
        istgleich->setText(QCoreApplication::translate("TB_CalculatorClass", "=", nullptr));
        komma->setText(QCoreApplication::translate("TB_CalculatorClass", ",", nullptr));
        neun->setText(QCoreApplication::translate("TB_CalculatorClass", "9", nullptr));
        zwei->setText(QCoreApplication::translate("TB_CalculatorClass", "2", nullptr));
        drei->setText(QCoreApplication::translate("TB_CalculatorClass", "3", nullptr));
        sieben->setText(QCoreApplication::translate("TB_CalculatorClass", "7", nullptr));
        null_2->setText(QCoreApplication::translate("TB_CalculatorClass", "0", nullptr));
        acht->setText(QCoreApplication::translate("TB_CalculatorClass", "8", nullptr));
        fuenf->setText(QCoreApplication::translate("TB_CalculatorClass", "5", nullptr));
        sechs->setText(QCoreApplication::translate("TB_CalculatorClass", "6", nullptr));
        vier->setText(QCoreApplication::translate("TB_CalculatorClass", "4", nullptr));
        dividiert->setText(QCoreApplication::translate("TB_CalculatorClass", "/", nullptr));
        mal->setText(QCoreApplication::translate("TB_CalculatorClass", "*", nullptr));
        minus->setText(QCoreApplication::translate("TB_CalculatorClass", "-", nullptr));
        plus->setText(QCoreApplication::translate("TB_CalculatorClass", "+", nullptr));
        clear->setText(QString());
        del->setText(QString());
        INFO->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TB_CalculatorClass: public Ui_TB_CalculatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TB_CALCULATOR_H
