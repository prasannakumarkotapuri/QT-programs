#include "pushbutton.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    pushbutton p;
    p.show();
    return a.exec();
}
