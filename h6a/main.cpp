#include <QCoreApplication>
#include "MyClass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Luodaan MyClass-olio ilman parentia
    MyClass obj(nullptr);

    // Nostetaan signaali mySignal
    obj.raiseMySignal();

    return a.exec();
}
