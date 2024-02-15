#include "TB_Calculator.h"
#include <iostream>
#include <string>
using namespace std;

#include <QMessageBox>
#include <QIcon>

#include <sstream>
#include <cmath>
#include <stdexcept>

#include <QRegularExpressionValidator>

TB_Calculator::TB_Calculator(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    ui.INFO->setAlignment(Qt::AlignCenter);

    QIcon clear("C:/Users/birnst2/Desktop/KNAPP/WMS Cardiff/C++/TB_Calculator in C++/TB_Calculator in C++/Icons/delete.ico");
    QIcon del("C:/Users/birnst2/Desktop/KNAPP/WMS Cardiff/C++/TB_Calculator in C++/TB_Calculator in C++/Icons/remove.ico");
    QIcon icon("C:/Users/birnst2/Desktop/KNAPP/WMS Cardiff/C++/TB_Calculator in C++/TB_Calculator in C++/Icons/calculator.ico");

    ui.del->setIcon(del);
    ui.clear->setIcon(clear);
    setWindowIcon(icon);

    RegularExpression();
}

TB_Calculator::~TB_Calculator()
{

}

void TB_Calculator::RegularExpression() {

    QRegularExpression regex("[0-9+\\-*/√^.]*");

    QValidator* validator = new QRegularExpressionValidator(regex, this);
    ui.eingabefeld->setValidator(validator);

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

    if (INFO_STAT == "F") { // Fehler
        ui.INFO->setStyleSheet("QLabel { background-color : rgb(255,0,0) }");
        QMessageBox::StandardButton res = QMessageBox::critical(this, tr("Fehler"), INFO, QMessageBox::Ok);
        qDebug() << res;
    }
    else if (INFO_STAT == "H") { // Hinweis
        ui.INFO->setStyleSheet("QLabel { background-color : rgb(255,197,20) }");
        QMessageBox::StandardButton res = QMessageBox::information(this, tr("Information"), INFO, QMessageBox::Ok);
        qDebug() << res;
    }
    else { // Leer lassen
        ui.INFO->setStyleSheet("QLabel { background-color : rgb(85,170,127) }");
    }
}

void TB_Calculator::on_istgleich_clicked() {
    QString expression = ui.eingabefeld->text();
    try {
        float result = eval(expression.toStdString());
        ui.eingabefeld->setText(QString::number(result));
        Informationen("Berechnung Abgeschlossen!", "");
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
        case '^': // Quadrieren
            result = pow(result, num);
            break;
        case '√': // Wurzel
            result = pow(num, 0.5);
            break;
        default:
            Informationen("Ungültiger Operator", "F");
            break;
        }
    }
    return result;
}