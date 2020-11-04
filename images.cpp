#include "images.h"
#include <QDebug>
Images::Images(const QString &path, const QString &filter)
{
        QDirIterator directory(path, QStringList() << "*.png", QDir::Files, QDirIterator::Subdirectories);
        while(directory.hasNext())
                imagepaths.push_back(directory.next());


}

QString Images::GetPath(const int &index)const {
        if(index<imagepaths.size())
                return imagepaths.at(index);
        else
                return NULL;
}

QString Images::next() {
       current++;
       if(current > imagepaths.size()-1)
               current = 0;
        return imagepaths.at(current);
}

QString Images::previous() {
        current--;
        if(current < 0)
                current = imagepaths.size()-1;
         return imagepaths.at(current);
}

