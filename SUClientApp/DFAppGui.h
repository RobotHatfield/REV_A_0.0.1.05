#ifndef DFAPPGUI_H
#define DFAPPGUI_H

#include <QMainWindow>

class DFAppGui : public QMainWindow
{
    Q_OBJECT

public:
    DFAppGui(QWidget *parent = 0);
    ~DFAppGui();
};

#endif // DFAPPGUI_H
