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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TB_CalculatorClass
{
public:
    QWidget *Calculate;
    QGridLayout *gridLayout_3;
    QTabWidget *ZuMasse;
    QWidget *tab;
    QGridLayout *gridLayout_4;
    QLineEdit *eingabefeld;
    QHBoxLayout *horizontalLayout;
    QPushButton *binaer;
    QPushButton *dez;
    QPushButton *wurzel;
    QPushButton *quadrieren;
    QGridLayout *gridLayout;
    QPushButton *fuenf;
    QPushButton *drei;
    QPushButton *acht;
    QPushButton *zwei;
    QPushButton *sechs;
    QPushButton *del;
    QPushButton *clear;
    QPushButton *null_2;
    QPushButton *neun;
    QPushButton *mal;
    QPushButton *eins;
    QPushButton *istgleich;
    QPushButton *plus;
    QPushButton *komma;
    QPushButton *minus;
    QPushButton *vier;
    QPushButton *dividiert;
    QPushButton *sieben;
    QLabel *INFO;
    QWidget *tab_2;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_2;
    QListWidget *History;
    QWidget *tab_3;
    QLineEdit *Eingabe;
    QLineEdit *Ausgabe;
    QLabel *istgleichlabel;
    QComboBox *VonG;
    QComboBox *Einheit;
    QComboBox *ZuG;

    void setupUi(QMainWindow *TB_CalculatorClass)
    {
        if (TB_CalculatorClass->objectName().isEmpty())
            TB_CalculatorClass->setObjectName("TB_CalculatorClass");
        TB_CalculatorClass->resize(424, 671);
        TB_CalculatorClass->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 247, 247);"));
        Calculate = new QWidget(TB_CalculatorClass);
        Calculate->setObjectName("Calculate");
        gridLayout_3 = new QGridLayout(Calculate);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName("gridLayout_3");
        ZuMasse = new QTabWidget(Calculate);
        ZuMasse->setObjectName("ZuMasse");
        ZuMasse->setEnabled(true);
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout_4 = new QGridLayout(tab);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName("gridLayout_4");
        eingabefeld = new QLineEdit(tab);
        eingabefeld->setObjectName("eingabefeld");
        eingabefeld->setMaximumSize(QSize(405, 50));
        QFont font;
        font.setPointSize(15);
        eingabefeld->setFont(font);
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

        gridLayout_4->addWidget(eingabefeld, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, -1, -1, -1);
        binaer = new QPushButton(tab);
        binaer->setObjectName("binaer");
        binaer->setMinimumSize(QSize(0, 50));
        binaer->setMaximumSize(QSize(135, 50));
        QFont font1;
        font1.setPointSize(16);
        binaer->setFont(font1);
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

        dez = new QPushButton(tab);
        dez->setObjectName("dez");
        dez->setMinimumSize(QSize(0, 50));
        dez->setMaximumSize(QSize(135, 50));
        dez->setFont(font1);
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

        wurzel = new QPushButton(tab);
        wurzel->setObjectName("wurzel");
        wurzel->setMinimumSize(QSize(0, 50));
        QFont font2;
        font2.setPointSize(12);
        wurzel->setFont(font2);
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

        quadrieren = new QPushButton(tab);
        quadrieren->setObjectName("quadrieren");
        quadrieren->setMinimumSize(QSize(0, 50));
        quadrieren->setFont(font2);
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


        gridLayout_4->addLayout(horizontalLayout, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(4);
        gridLayout->setVerticalSpacing(3);
        gridLayout->setContentsMargins(-1, -1, -1, 0);
        fuenf = new QPushButton(tab);
        fuenf->setObjectName("fuenf");
        fuenf->setMinimumSize(QSize(95, 95));
        fuenf->setMaximumSize(QSize(95, 95));
        fuenf->setFont(font1);
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

        drei = new QPushButton(tab);
        drei->setObjectName("drei");
        drei->setMinimumSize(QSize(95, 95));
        drei->setMaximumSize(QSize(95, 95));
        drei->setFont(font1);
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

        acht = new QPushButton(tab);
        acht->setObjectName("acht");
        acht->setMinimumSize(QSize(95, 95));
        acht->setMaximumSize(QSize(95, 95));
        acht->setFont(font1);
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

        zwei = new QPushButton(tab);
        zwei->setObjectName("zwei");
        zwei->setMinimumSize(QSize(95, 95));
        zwei->setMaximumSize(QSize(95, 95));
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

        sechs = new QPushButton(tab);
        sechs->setObjectName("sechs");
        sechs->setMinimumSize(QSize(95, 95));
        sechs->setMaximumSize(QSize(95, 95));
        sechs->setFont(font1);
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

        del = new QPushButton(tab);
        del->setObjectName("del");
        del->setMinimumSize(QSize(0, 50));
        del->setFont(font1);
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

        clear = new QPushButton(tab);
        clear->setObjectName("clear");
        clear->setMinimumSize(QSize(0, 50));
        clear->setFont(font1);
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

        null_2 = new QPushButton(tab);
        null_2->setObjectName("null_2");
        null_2->setEnabled(true);
        null_2->setMinimumSize(QSize(95, 95));
        null_2->setMaximumSize(QSize(95, 95));
        null_2->setFont(font1);
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

        neun = new QPushButton(tab);
        neun->setObjectName("neun");
        neun->setMinimumSize(QSize(95, 95));
        neun->setMaximumSize(QSize(95, 95));
        neun->setFont(font1);
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

        mal = new QPushButton(tab);
        mal->setObjectName("mal");
        mal->setMinimumSize(QSize(0, 50));
        mal->setFont(font1);
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

        eins = new QPushButton(tab);
        eins->setObjectName("eins");
        eins->setMinimumSize(QSize(95, 95));
        eins->setMaximumSize(QSize(95, 95));
        eins->setFont(font1);
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

        istgleich = new QPushButton(tab);
        istgleich->setObjectName("istgleich");
        istgleich->setMinimumSize(QSize(0, 50));
        istgleich->setFont(font1);
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

        plus = new QPushButton(tab);
        plus->setObjectName("plus");
        plus->setMinimumSize(QSize(0, 50));
        plus->setFont(font1);
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

        komma = new QPushButton(tab);
        komma->setObjectName("komma");
        komma->setMinimumSize(QSize(95, 95));
        komma->setMaximumSize(QSize(95, 95));
        komma->setFont(font1);
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

        minus = new QPushButton(tab);
        minus->setObjectName("minus");
        minus->setMinimumSize(QSize(0, 50));
        minus->setFont(font1);
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

        vier = new QPushButton(tab);
        vier->setObjectName("vier");
        vier->setMinimumSize(QSize(95, 95));
        vier->setMaximumSize(QSize(95, 95));
        vier->setFont(font1);
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

        dividiert = new QPushButton(tab);
        dividiert->setObjectName("dividiert");
        dividiert->setMinimumSize(QSize(0, 50));
        dividiert->setFont(font1);
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

        sieben = new QPushButton(tab);
        sieben->setObjectName("sieben");
        sieben->setMinimumSize(QSize(95, 95));
        sieben->setMaximumSize(QSize(95, 95));
        sieben->setFont(font1);
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


        gridLayout_4->addLayout(gridLayout, 2, 0, 1, 1);

        INFO = new QLabel(tab);
        INFO->setObjectName("INFO");
        INFO->setMinimumSize(QSize(0, 25));
        INFO->setMaximumSize(QSize(500, 35));
        INFO->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(INFO, 3, 0, 1, 1);

        ZuMasse->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        gridLayout_5 = new QGridLayout(tab_2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 1, 0, 4);
        History = new QListWidget(tab_2);
        History->setObjectName("History");
        History->setMinimumSize(QSize(380, 600));
        History->setMaximumSize(QSize(380, 600));

        gridLayout_2->addWidget(History, 0, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_2, 0, 0, 1, 1);

        ZuMasse->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        Eingabe = new QLineEdit(tab_3);
        Eingabe->setObjectName("Eingabe");
        Eingabe->setGeometry(QRect(10, 59, 161, 31));
        Eingabe->setMaximumSize(QSize(405, 50));
        Eingabe->setFont(font);
        Eingabe->setLayoutDirection(Qt::LeftToRight);
        Eingabe->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        Eingabe->setAlignment(Qt::AlignCenter);
        Ausgabe = new QLineEdit(tab_3);
        Ausgabe->setObjectName("Ausgabe");
        Ausgabe->setGeometry(QRect(220, 60, 171, 31));
        Ausgabe->setMaximumSize(QSize(405, 50));
        Ausgabe->setFont(font);
        Ausgabe->setLayoutDirection(Qt::LeftToRight);
        Ausgabe->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        Ausgabe->setAlignment(Qt::AlignCenter);
        istgleichlabel = new QLabel(tab_3);
        istgleichlabel->setObjectName("istgleichlabel");
        istgleichlabel->setGeometry(QRect(180, 60, 31, 21));
        QFont font4;
        font4.setPointSize(30);
        istgleichlabel->setFont(font4);
        VonG = new QComboBox(tab_3);
        VonG->addItem(QString());
        VonG->addItem(QString());
        VonG->addItem(QString());
        VonG->addItem(QString());
        VonG->addItem(QString());
        VonG->addItem(QString());
        VonG->addItem(QString());
        VonG->setObjectName("VonG");
        VonG->setGeometry(QRect(10, 100, 161, 22));
        VonG->setStyleSheet(QString::fromUtf8(""));
        Einheit = new QComboBox(tab_3);
        Einheit->addItem(QString());
        Einheit->addItem(QString());
        Einheit->setObjectName("Einheit");
        Einheit->setGeometry(QRect(118, 20, 161, 22));
        ZuG = new QComboBox(tab_3);
        ZuG->addItem(QString());
        ZuG->addItem(QString());
        ZuG->addItem(QString());
        ZuG->addItem(QString());
        ZuG->addItem(QString());
        ZuG->addItem(QString());
        ZuG->addItem(QString());
        ZuG->setObjectName("ZuG");
        ZuG->setGeometry(QRect(230, 100, 161, 22));
        ZuMasse->addTab(tab_3, QString());

        gridLayout_3->addWidget(ZuMasse, 0, 1, 1, 1);

        TB_CalculatorClass->setCentralWidget(Calculate);
        QWidget::setTabOrder(eingabefeld, binaer);
        QWidget::setTabOrder(binaer, dez);
        QWidget::setTabOrder(dez, wurzel);
        QWidget::setTabOrder(wurzel, quadrieren);
        QWidget::setTabOrder(quadrieren, sieben);
        QWidget::setTabOrder(sieben, acht);
        QWidget::setTabOrder(acht, neun);
        QWidget::setTabOrder(neun, vier);
        QWidget::setTabOrder(vier, fuenf);
        QWidget::setTabOrder(fuenf, sechs);
        QWidget::setTabOrder(sechs, eins);
        QWidget::setTabOrder(eins, zwei);
        QWidget::setTabOrder(zwei, drei);
        QWidget::setTabOrder(drei, null_2);
        QWidget::setTabOrder(null_2, komma);
        QWidget::setTabOrder(komma, del);
        QWidget::setTabOrder(del, clear);
        QWidget::setTabOrder(clear, plus);
        QWidget::setTabOrder(plus, minus);
        QWidget::setTabOrder(minus, mal);
        QWidget::setTabOrder(mal, dividiert);
        QWidget::setTabOrder(dividiert, istgleich);

        retranslateUi(TB_CalculatorClass);

        ZuMasse->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(TB_CalculatorClass);
    } // setupUi

    void retranslateUi(QMainWindow *TB_CalculatorClass)
    {
        TB_CalculatorClass->setWindowTitle(QCoreApplication::translate("TB_CalculatorClass", "TB_Calculator", nullptr));
        eingabefeld->setText(QString());
        binaer->setText(QCoreApplication::translate("TB_CalculatorClass", "dez -> bin", nullptr));
        dez->setText(QCoreApplication::translate("TB_CalculatorClass", "bin -> dez", nullptr));
        wurzel->setText(QCoreApplication::translate("TB_CalculatorClass", "\342\210\232", nullptr));
        quadrieren->setText(QCoreApplication::translate("TB_CalculatorClass", "^", nullptr));
        fuenf->setText(QCoreApplication::translate("TB_CalculatorClass", "5", nullptr));
        drei->setText(QCoreApplication::translate("TB_CalculatorClass", "3", nullptr));
        acht->setText(QCoreApplication::translate("TB_CalculatorClass", "8", nullptr));
        zwei->setText(QCoreApplication::translate("TB_CalculatorClass", "2", nullptr));
        sechs->setText(QCoreApplication::translate("TB_CalculatorClass", "6", nullptr));
        del->setText(QString());
        clear->setText(QString());
        null_2->setText(QCoreApplication::translate("TB_CalculatorClass", "0", nullptr));
        neun->setText(QCoreApplication::translate("TB_CalculatorClass", "9", nullptr));
        mal->setText(QCoreApplication::translate("TB_CalculatorClass", "*", nullptr));
        eins->setText(QCoreApplication::translate("TB_CalculatorClass", "1", nullptr));
        istgleich->setText(QCoreApplication::translate("TB_CalculatorClass", "=", nullptr));
        plus->setText(QCoreApplication::translate("TB_CalculatorClass", "+", nullptr));
        komma->setText(QCoreApplication::translate("TB_CalculatorClass", ",", nullptr));
        minus->setText(QCoreApplication::translate("TB_CalculatorClass", "-", nullptr));
        vier->setText(QCoreApplication::translate("TB_CalculatorClass", "4", nullptr));
        dividiert->setText(QCoreApplication::translate("TB_CalculatorClass", "/", nullptr));
        sieben->setText(QCoreApplication::translate("TB_CalculatorClass", "7", nullptr));
        INFO->setText(QString());
        ZuMasse->setTabText(ZuMasse->indexOf(tab), QCoreApplication::translate("TB_CalculatorClass", "Taschenrechner", nullptr));
        ZuMasse->setTabText(ZuMasse->indexOf(tab_2), QCoreApplication::translate("TB_CalculatorClass", "Verlauf", nullptr));
        Eingabe->setText(QString());
        Ausgabe->setText(QString());
        istgleichlabel->setText(QCoreApplication::translate("TB_CalculatorClass", "=", nullptr));
        VonG->setItemText(0, QCoreApplication::translate("TB_CalculatorClass", "Kliometer", nullptr));
        VonG->setItemText(1, QCoreApplication::translate("TB_CalculatorClass", "Meter", nullptr));
        VonG->setItemText(2, QCoreApplication::translate("TB_CalculatorClass", "Dezimeter", nullptr));
        VonG->setItemText(3, QCoreApplication::translate("TB_CalculatorClass", "Zentimeter", nullptr));
        VonG->setItemText(4, QCoreApplication::translate("TB_CalculatorClass", "Millimeter", nullptr));
        VonG->setItemText(5, QCoreApplication::translate("TB_CalculatorClass", "Mikrometer", nullptr));
        VonG->setItemText(6, QCoreApplication::translate("TB_CalculatorClass", "Nanometer", nullptr));

        Einheit->setItemText(0, QCoreApplication::translate("TB_CalculatorClass", "L\303\244nge", nullptr));
        Einheit->setItemText(1, QCoreApplication::translate("TB_CalculatorClass", "Masse", nullptr));

        ZuG->setItemText(0, QCoreApplication::translate("TB_CalculatorClass", "Kliometer", nullptr));
        ZuG->setItemText(1, QCoreApplication::translate("TB_CalculatorClass", "Meter", nullptr));
        ZuG->setItemText(2, QCoreApplication::translate("TB_CalculatorClass", "Dezimeter", nullptr));
        ZuG->setItemText(3, QCoreApplication::translate("TB_CalculatorClass", "Zentimeter", nullptr));
        ZuG->setItemText(4, QCoreApplication::translate("TB_CalculatorClass", "Millimeter", nullptr));
        ZuG->setItemText(5, QCoreApplication::translate("TB_CalculatorClass", "Mikrometer", nullptr));
        ZuG->setItemText(6, QCoreApplication::translate("TB_CalculatorClass", "Nanometer", nullptr));

        ZuMasse->setTabText(ZuMasse->indexOf(tab_3), QCoreApplication::translate("TB_CalculatorClass", "Gr\303\266\303\237en", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TB_CalculatorClass: public Ui_TB_CalculatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TB_CALCULATOR_H
