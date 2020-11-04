#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "images.h"
#include "controller.h"
int main(int argc, char *argv[])
{


        QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

        QGuiApplication app(argc, argv);
        Controller ImageGallery;
        QQmlApplicationEngine engine;
        const QUrl url(QStringLiteral("qrc:/main.qml"));
        engine.rootContext()->setContextProperty("ImageGallery",&ImageGallery);

        QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                         &app, [url](QObject *obj, const QUrl &objUrl) {
                if (!obj && url == objUrl)
                        QCoreApplication::exit(-1);
        }, Qt::QueuedConnection);

        engine.load(url);

        return app.exec();
}
