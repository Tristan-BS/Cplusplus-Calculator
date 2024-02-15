#include "TB_Calculator.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TB_Calculator w;
    w.show();
    return a.exec();
}
