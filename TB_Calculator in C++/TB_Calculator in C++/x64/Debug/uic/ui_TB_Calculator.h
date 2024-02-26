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
    QTabWidget *Tabs;
    QWidget *tab;
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
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *binaer;
    QPushButton *dez;
    QPushButton *wurzel;
    QPushButton *quadrieren;
    QLabel *INFO;
    QWidget *tab_2;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QPushButton *sqldelete;
    QListWidget *History;

    void setupUi(QMainWindow *TB_CalculatorClass)
    {
        if (TB_CalculatorClass->objectName().isEmpty())
            TB_CalculatorClass->setObjectName("TB_CalculatorClass");
        TB_CalculatorClass->resize(403, 658);
        Calculate = new QWidget(TB_CalculatorClass);
        Calculate->setObjectName("Calculate");
        Tabs = new QTabWidget(Calculate);
        Tabs->setObjectName("Tabs");
        Tabs->setGeometry(QRect(0, 10, 401, 641));
        tab = new QWidget();
        tab->setObjectName("tab");
        eingabefeld = new QLineEdit(tab);
        eingabefeld->setObjectName("eingabefeld");
        eingabefeld->setGeometry(QRect(10, 19, 371, 41));
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
        layoutWidget_2 = new QWidget(tab);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(10, 130, 371, 431));
        gridLayout = new QGridLayout(layoutWidget_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(4);
        gridLayout->setVerticalSpacing(3);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        eins = new QPushButton(layoutWidget_2);
        eins->setObjectName("eins");
        eins->setMinimumSize(QSize(95, 95));
        eins->setMaximumSize(QSize(95, 95));
        QFont font1;
        font1.setPointSize(16);
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

        istgleich = new QPushButton(layoutWidget_2);
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

        komma = new QPushButton(layoutWidget_2);
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

        neun = new QPushButton(layoutWidget_2);
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

        zwei = new QPushButton(layoutWidget_2);
        zwei->setObjectName("zwei");
        zwei->setMinimumSize(QSize(95, 95));
        zwei->setMaximumSize(QSize(95, 95));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(false);
        zwei->setFont(font2);
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

        sieben = new QPushButton(layoutWidget_2);
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

        null_2 = new QPushButton(layoutWidget_2);
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

        acht = new QPushButton(layoutWidget_2);
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

        fuenf = new QPushButton(layoutWidget_2);
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

        sechs = new QPushButton(layoutWidget_2);
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

        vier = new QPushButton(layoutWidget_2);
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

        dividiert = new QPushButton(layoutWidget_2);
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

        mal = new QPushButton(layoutWidget_2);
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

        minus = new QPushButton(layoutWidget_2);
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

        plus = new QPushButton(layoutWidget_2);
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

        clear = new QPushButton(layoutWidget_2);
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

        del = new QPushButton(layoutWidget_2);
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

        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 70, 371, 52));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        binaer = new QPushButton(layoutWidget);
        binaer->setObjectName("binaer");
        binaer->setMinimumSize(QSize(0, 50));
        binaer->setMaximumSize(QSize(135, 50));
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

        dez = new QPushButton(layoutWidget);
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

        wurzel = new QPushButton(layoutWidget);
        wurzel->setObjectName("wurzel");
        wurzel->setMinimumSize(QSize(0, 50));
        QFont font3;
        font3.setPointSize(12);
        wurzel->setFont(font3);
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
        quadrieren->setFont(font3);
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

        INFO = new QLabel(tab);
        INFO->setObjectName("INFO");
        INFO->setGeometry(QRect(10, 570, 371, 31));
        INFO->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Tabs->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        layoutWidget1 = new QWidget(tab_2);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(0, 10, 391, 601));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(2, 1, 0, 0);
        sqldelete = new QPushButton(layoutWidget1);
        sqldelete->setObjectName("sqldelete");
        sqldelete->setMaximumSize(QSize(150, 200));

        gridLayout_2->addWidget(sqldelete, 0, 0, 1, 1);

        History = new QListWidget(layoutWidget1);
        History->setObjectName("History");

        gridLayout_2->addWidget(History, 1, 0, 1, 1);

        Tabs->addTab(tab_2, QString());
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

        Tabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TB_CalculatorClass);
    } // setupUi

    void retranslateUi(QMainWindow *TB_CalculatorClass)
    {
        TB_CalculatorClass->setWindowTitle(QCoreApplication::translate("TB_CalculatorClass", "TB_Calculator", nullptr));
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
        binaer->setText(QCoreApplication::translate("TB_CalculatorClass", "dez -> bin", nullptr));
        dez->setText(QCoreApplication::translate("TB_CalculatorClass", "bin -> dez", nullptr));
        wurzel->setText(QCoreApplication::translate("TB_CalculatorClass", "\342\210\232", nullptr));
        quadrieren->setText(QCoreApplication::translate("TB_CalculatorClass", "^", nullptr));
        INFO->setText(QString());
        Tabs->setTabText(Tabs->indexOf(tab), QCoreApplication::translate("TB_CalculatorClass", "Taschenrechner", nullptr));
        sqldelete->setText(QCoreApplication::translate("TB_CalculatorClass", "Neu laden", nullptr));
        Tabs->setTabText(Tabs->indexOf(tab_2), QCoreApplication::translate("TB_CalculatorClass", "Verlauf", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TB_CalculatorClass: public Ui_TB_CalculatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TB_CALCULATOR_H
