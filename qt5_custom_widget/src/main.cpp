#include <QApplication>
#include "mainwindow/mainwindow.hpp"

int main(int arvc, char * argv[])
{
    QApplication app(arvc, argv);
    qt5_custom_widget::ExampleWindow window;
    window.show();
    return app.exec();
}