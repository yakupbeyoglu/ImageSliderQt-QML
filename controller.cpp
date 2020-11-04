#include "controller.h"

Controller::Controller(QObject *parent)
{
        currentPath = imagePaths.GetPath(0);
        emit pathsended();
}

QString Controller::getPath() {
        return currentPath;

}

void Controller::keypress(const int key){
        if(key == 0) {
                currentPath = imagePaths.previous();
                emit pathsended();
        }
        else if (key == 1) {
                currentPath = imagePaths.next();
                emit pathsended();
        }
}
