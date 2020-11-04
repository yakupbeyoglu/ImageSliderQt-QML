#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <QObject>
#include <QtDebug>
#include "images.h"
class Controller: public QObject
{
        Q_OBJECT
public:
        Q_PROPERTY(QString tpath  READ  getPath NOTIFY pathsended);
        explicit Controller(QObject *parent = 0);
        QString getPath();

public slots:
       // 1 is next 0 is previous
       void keypress(const int key);
signals :
       void pathsended();
private:
       Images imagePaths;
       QString currentPath;
};

#endif // CONTROLLER_H
