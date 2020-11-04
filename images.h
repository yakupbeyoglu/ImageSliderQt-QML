#ifndef IMAGES_H
#define IMAGES_H
#include <QVector>
#include <QDirIterator>
class Images
{
public:
        Images(const QString &path="Images",const QString &filter=".png");
        QString GetPath(const int &index)const;
        QString next();
        QString previous();
        int GetSize();
        int GetCurrent();


private:
        QVector<QString> imagepaths;
        int size;
        int current = 0;
};

#endif // IMAGES_H
