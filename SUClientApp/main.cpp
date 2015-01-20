#include "DFAppGui.h"
#include "DFAppServices.h"

int main(int argc, char *argv[])
{
    DFAppServices s(argc, argv);
    DFAppGui g(&s);
    g.show();

    return s.exec();
}
