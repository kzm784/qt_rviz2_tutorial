#include "mainwindow.hpp"

namespace qt5_layout
{

ExampleWindow::ExampleWindow(QWidget * parent) : QMainWindow(parent)
{
    setWindowTitle("Hello Qt5!");
    resize(800, 800);
    setCentralWidget(new ExampleWidget(this));
}

} // namespace qt5_layout