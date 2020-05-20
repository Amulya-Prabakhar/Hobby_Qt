#include"simplewidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
SimpleWidget w;
w.show();
w.setWindowTitle("Lets ask you some question");

    return a.exec();
}
