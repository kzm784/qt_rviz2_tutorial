#include "mainwindow.hpp"

namespace qt5_custom_widget
{

ExampleWindow::ExampleWindow(QWidget * parent)
: QMainWindow(parent)
{
  setWindowTitle("Hello, Qt5!");
  resize(800, 600);
  setCentralWidget(new ExampleWidget(this));
}

} // namespace qt5_custom_widget