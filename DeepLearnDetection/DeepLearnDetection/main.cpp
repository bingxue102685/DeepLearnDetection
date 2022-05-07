#include "DeepLearnDetection.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DeepLearnDetection w;
    w.show();
    return a.exec();
}
