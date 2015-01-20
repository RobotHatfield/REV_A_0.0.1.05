#include "DFAppCore.h"

#include "QDebug"

DFAppCore::DFAppCore(int &argc, char **argv) : QApplication(argc,argv)
{
    qDebug() << "DFAppCore Initializing";

    this->setApplicationName(tr("DataFlow"));
    this->setApplicationVersion(tr("Rev.A-0.0.1.05"));
    this->setOrganizationName(tr("Enigma Creative Media Solutions Inc."));

    qDebug() << "DFAppCore Initialized";
}

DFAppCore::~DFAppCore()
{
    qDebug() << "DFAppCore Destructing";

    qDebug() << "DFAppCore Destructed";

}
