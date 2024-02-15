#include "TB_Calculator.h"
#include <iostream>
#include <string>
using namespace std;

#include <QMessageBox>
#include <QIcon>
#include <QDebug>
#include <QTimer>
#include <QString>
#include <QStringList>

#include <sstream>
#include <cmath>
#include <stdexcept>

#include <QRegularExpressionValidator>

TB_Calculator::TB_Calculator(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    INFOCentered();
    Icons();
    RegularExpression();
}

TB_Calculator::~TB_Calculator()
{

}

void TB_Calculator::success() {

    ui.eingabefeld->setStyleSheet("color: green;");
}

void TB_Calculator::normal() {
    ui.eingabefeld->setStyleSheet("color: black;");
}

void TB_Calculator::RegularExpression() {

    QRegularExpression regex("[0-9+\\-*/√^.]*");

    QValidator* validator = new QRegularExpressionValidator(regex, this);
    ui.eingabefeld->setValidator(validator);

}

void TB_Calculator::Icons() {
    QIcon clear("C:/Users/birnst2/Desktop/KNAPP/WMS Cardiff/C++/TB_Calculator in C++/TB_Calculator in C++/Icons/delete.ico");
    QIcon del("C:/Users/birnst2/Desktop/KNAPP/WMS Cardiff/C++/TB_Calculator in C++/TB_Calculator in C++/Icons/remove.ico");
    QIcon icon("C:/Users/birnst2/Desktop/KNAPP/WMS Cardiff/C++/TB_Calculator in C++/TB_Calculator in C++/Icons/calculator.ico");

    ui.del->setIcon(del);
    ui.clear->setIcon(clear);
    setWindowIcon(icon);
}

void TB_Calculator::INFOCentered() {
    ui.INFO->setAlignment(Qt::AlignCenter);
}

void TB_Calculator::on_null_2_clicked() {
    ui.eingabefeld->insert("0");
}

void TB_Calculator::on_eins_clicked() {
    ui.eingabefeld->insert("1");
}

void TB_Calculator::on_zwei_clicked() {
    ui.eingabefeld->insert("2");
}

void TB_Calculator::on_drei_clicked() {
    ui.eingabefeld->insert("3");
}

void TB_Calculator::on_vier_clicked() {
    ui.eingabefeld->insert("4");
}

void TB_Calculator::on_fuenf_clicked() {
    ui.eingabefeld->insert("5");
}

void TB_Calculator::on_sechs_clicked() {
    ui.eingabefeld->insert("6");
}

void TB_Calculator::on_sieben_clicked() {
    ui.eingabefeld->insert("7");
}

void TB_Calculator::on_acht_clicked() {
    ui.eingabefeld->insert("8");
}

void TB_Calculator::on_neun_clicked() {
    ui.eingabefeld->insert("9");
}

void TB_Calculator::on_plus_clicked() {
    ui.eingabefeld->insert("+");
}

void TB_Calculator::on_mal_clicked() {
    ui.eingabefeld->insert("*");
}

void TB_Calculator::on_minus_clicked() {
    ui.eingabefeld->insert("-");
}

void TB_Calculator::on_dividiert_clicked() {
    ui.eingabefeld->insert("/");
}

void TB_Calculator::on_komma_clicked() {
    ui.eingabefeld->insert(".");
}

void TB_Calculator::on_wurzel_clicked() {
    ui.eingabefeld->insert("√");
}

void TB_Calculator::on_quadrieren_clicked() {
    ui.eingabefeld->insert("^");
}

void TB_Calculator::on_del_clicked() {
    QString text = ui.eingabefeld->text();

    if (!text.isEmpty()) {

        text.chop(1);

        ui.eingabefeld->setText(text);
        Informationen("Die Letzte Zahl wurde geloescht", "");
    }
}

void TB_Calculator::on_clear_clicked() {
    ui.eingabefeld->setText("");
    Informationen("Das Eingabefeld wurde geleert.", "");
}

void TB_Calculator::Informationen(const QString& INFO, const QString& INFO_STAT) {
    ui.INFO->setText(INFO);

    if (INFO_STAT == "F") {
        ui.INFO->setStyleSheet("QLabel { background-color : rgb(255,0,0) }");
        QMessageBox::StandardButton res = QMessageBox::critical(this, tr("Fehler"), INFO, QMessageBox::Ok);
        qDebug() << res;
    }
    else if (INFO_STAT == "H") {
        ui.INFO->setStyleSheet("QLabel { background-color : rgb(255,197,20) }");
        QMessageBox::StandardButton res = QMessageBox::information(this, tr("Information"), INFO, QMessageBox::Ok);
        qDebug() << res;
    }
    else { 
        ui.INFO->setStyleSheet("QLabel { background-color : rgb(85,170,127) }");
    }
}

void TB_Calculator::on_istgleich_clicked() {
    QString expression = ui.eingabefeld->text();
    try {
        float result = eval(expression.toStdString());
        ui.eingabefeld->setText(QString::number(result));
        Informationen("Berechnung Abgeschlossen!", "");
        success();
        QTimer::singleShot(1500, this, [=]() {
            normal();
            });
    }
    catch (const exception& e) {
        Informationen("Fehlgeschlagen.", "F");
    }
}

float TB_Calculator::eval(const string& expression) {
    istringstream iss(expression);

    char op;
    float result, num;

    iss >> result;

    while (iss >> op >> num) {
        switch (op) {
        case '+':
            result += num;
            break;
        case '-':
            result -= num;
            break;
        case '*':
            result *= num;
            break;
        case '/':
            if (num == 0) {
                Informationen("Du kannst nicht durch null Dividieren!", "F");
                ui.eingabefeld->setText("");
                return 0.0;
            }
            else {
                result /= num;
            }
            break;
        case '^':
            result = pow(result, num);
            break;
        case '√':
                result = sqrt(result);
            break;
        default:
            Informationen("Ungültiger Operator", "F");
            break;
        }
    }
    return result;
}

void TB_Calculator::on_binaer_clicked() {
    QString text = ui.eingabefeld->text();
    QString end = "";
    QStringList text_splited = text.split(".");

    if (!text.isEmpty()) {
        for (QString item : text_splited) {
            int a = item.toInt();
            if (a <= 128 || a >= 128) {
                if (a >= 128) {
                    end += "1";
                    a = a - 128;
                }
                else if (a <= 128) {
                    end += "0";
                }
            }
            if (a <= 64 || a >= 64) {
                if (a >= 64) {
                    end += "1";
                    a = a - 64;
                }
                else if (a <= 64) {
                    end += "0";
                }
            }
            if (a <= 32 || a >= 32) {
                if (a >= 32) {
                    end += "1";
                    a = a - 32;
                }
                else if (a <= 32) {
                    end += "0";
                }
            }
            if (a <= 16 || a >= 16) {
                if (a >= 16) {
                    end += "1";
                    a = a - 16;
                }
                else if (a <= 16) {
                    end += "0";
                }
            }
            if (a <= 8 || a >= 8) {
                if (a >= 8) {
                    end += "1";
                    a = a - 8;
                }
                else if (a <= 8) {
                    end += "0";
                }
            }
            if (a <= 4 || a >= 4) {
                if (a >= 4) {
                    end += "1";
                    a = a - 4;
                }
                else if (a <= 4) {
                    end += "0";
                }
            }
            if (a <= 2 || a >= 2) {
                if (a >= 2) {
                    end += "1";
                    a = a - 2;
                }
                else if (a <= 2) {
                    end += "0";
                }
            }
            if (a <= 1 || a >= 1) {
                if (a >= 1) {
                    end += "1";
                    a = a - 1;
                }
                else if (a <= 1) {
                    end += "0";
                }
            }
            end += ".";

            if (a > 255) {
                Informationen("Maximum erreicht. Ergebnis wird angezeigt", "H");
            }
        }
    }

    QString new_string = end.left(end.length() - 1);
    ui.eingabefeld->setText(new_string);
    Informationen("Berechnung Abgeschlossen!", "");
    success();
    QTimer::singleShot(1500, this, [=]() {
        normal();
        });
}

void TB_Calculator::on_dez_clicked() {
    QString text = ui.eingabefeld->text();
    QStringList binary_splited = text.split(".");
    QString end = "";

    for (QString binary : binary_splited) {
        int decimal = 0;
        int power = binary.length() - 1;
        for (QChar digit : binary) {
            decimal += digit.digitValue() * pow(2, power);
            power--;
        }
        end += QString::number(decimal);
        end += ".";
    }

    QString new_end = end.left(end.length() - 1);
    ui.eingabefeld->setText(new_end);
    Informationen("Berechnung Abgeschlossen!", "");
    success();
    QTimer::singleShot(1500, this, [=]() {
        normal();
        });
}