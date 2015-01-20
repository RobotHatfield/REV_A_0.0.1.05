#ifndef DFAPPGUI_H
#define DFAPPGUI_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
class DFAppServices;
QT_END_NAMESPACE

class DFAppGui : public QMainWindow
{
    Q_OBJECT

public:
    DFAppGui(DFAppServices *s, QWidget *parent = 0);
    ~DFAppGui();

private:
    void readSettings();
    void writeSettings();

    void setupGui();
    void createActions();
    void createMenus();

    QAction *quitAction;

    QMenu *fileMenu;
    QMenu *individualAddMenu;
    QMenu *toolsMenu;
    QMenu *importMenu;
    QMenu *helpMenu;
};

#endif // DFAPPGUI_H
