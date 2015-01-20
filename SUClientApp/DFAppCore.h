#ifndef DFAPPCORE_H
#define DFAPPCORE_H

#include <QApplication>

class DFAppCore : public QApplication
{
    Q_OBJECT
public:
    explicit DFAppCore(int &argc,char **argv);
    ~DFAppCore();

signals:

public slots:

private:
    void initLogging();
    void initRepository();

};

#endif // DFAPPCORE_H
