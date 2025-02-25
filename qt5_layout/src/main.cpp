#include <QApplication>
#include "mainwindow/mainwindow.hpp"

int main(int argc, char * argv[])
{
    QApplication app(argc, argv);
    qt5_layout::ExampleWindow window;
    window.show();
    return app.exec();
}