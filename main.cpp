#include <QCoreApplication>
#include "test.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    test obj;
    QObject::connect(&obj, &test::close,&a,&QCoreApplication::quit, Qt::QueuedConnection);

    qInfo() << "Closing the application!";

    obj.kill();
    return a.exec();
}
