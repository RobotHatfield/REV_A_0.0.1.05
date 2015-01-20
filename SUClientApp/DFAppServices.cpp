#include "DFAppServices.h"

#include <QDebug>

#include <QtWidgets>

DFAppServices::DFAppServices(int &argc,char **argv) : DFAppCore(argc, argv)
{
    qDebug() << "DFAppServices Initializing";

    qDebug() << "DFAppServices Initialized";
}

DFAppServices::~DFAppServices()
{
    qDebug() << "DFAppServices Destructing";

    qDebug() << "DFAppServices Destructed";
}
