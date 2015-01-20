#include "DFAppGui.h"

#include <QDebug>
#include <QtWidgets>

DFAppGui::DFAppGui(DFAppServices *services, QWidget *parent) : QMainWindow(parent)
{
    qDebug() << "DFAppGui Initializing";

    //guiServicePipe = services;
    setupGui();

    readSettings();

    setWindowTitle(tr("Dataflow Rev.A-0.0.1.05"));
    qDebug() << "DFAppGui Initialized";
}

DFAppGui::~DFAppGui()
{
    qDebug() << "DFAppGui Destructing";
    writeSettings();
    qDebug() << "DFAppGui Destructed";
}

void DFAppGui::readSettings()
{
    QSettings settings;
    settings.beginGroup("Gui_Settings");
    resize(settings.value("size", QSize(400, 400)).toSize());
    move(settings.value("pos", QPoint(200, 200)).toPoint());
    settings.endGroup();
}

void DFAppGui::writeSettings()
{
    QSettings settings;

    settings.beginGroup("Gui_Settings");
    settings.setValue("size", size());
    settings.setValue("pos", pos());
    settings.endGroup();
}

void DFAppGui::setupGui()
{
    createActions();
    createMenus();
}

void DFAppGui::createActions()
{
    quitAction = new QAction(this);
    quitAction->setText(tr("&Quit"));
    quitAction->setShortcut(tr("Ctrl+Q"));
    connect(quitAction,SIGNAL(triggered()),this,SLOT(close()));
}

void DFAppGui::createMenus()
{
    fileMenu = menuBar()->addMenu(tr("&File"));

    individualAddMenu = fileMenu->addMenu(tr("&Add"));

    fileMenu->addSeparator();
    fileMenu->addAction(quitAction);

    toolsMenu = menuBar()->addMenu(tr("Tools"));

    helpMenu = menuBar()->addMenu(tr("Help"));
}

