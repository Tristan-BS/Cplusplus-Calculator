#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TB_Calculator.h"
#include <QApplication>
#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>
#include <QString>

using namespace std;

class TB_Calculator : public QMainWindow
{
    Q_OBJECT

public:
    TB_Calculator(QWidget *parent = nullptr);
    ~TB_Calculator();

private:
    Ui::TB_CalculatorClass ui;
    vector<QString> calculate;

protected:
    void keyPressEvent(QKeyEvent* e);

private slots:
    void on_eins_clicked();
    void on_zwei_clicked();
    void on_drei_clicked();
    void on_vier_clicked();
    void on_fuenf_clicked();
    void on_sechs_clicked();
    void on_sieben_clicked();
    void on_acht_clicked();
    void on_neun_clicked();
    void on_null_2_clicked();
    void on_istgleich_clicked();
    void on_plus_clicked();
    void on_minus_clicked();
    void on_dividiert_clicked();
    void on_mal_clicked();
    void on_del_clicked();
    void on_komma_clicked();
    void on_wurzel_clicked();
    void on_quadrieren_clicked();
    void on_clear_clicked();
    void RegularExpression();
    void normal();
    void success();
    void on_dez_clicked();
    void on_binaer_clicked();
    void Icons();
    void INFOCentered();
    void HistoryClicked(QListWidgetItem* item);
    void Informationen(const QString& INFO, const QString& INFO_STAT);
    float eval(const string& expression);
};
