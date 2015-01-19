#include "DFAppGui.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DFAppGui w;
    w.show();

    return a.exec();
}
