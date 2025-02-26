#ifndef QT5_CUSTOM_WIDGET__MAINWINDOW__MAINWINDOW_HPP_
#define QT5_CUSTOM_WIDGET__MAINWINDOW__MAINWINDOW_HPP_

#include <QMainWindow>
#include "widget/widget.hpp"

namespace qt5_custom_widget
{

class ExampleWindow : public QMainWindow
{
public:
  explicit ExampleWindow(QWidget * = nullptr);
};

} // namespace qt5_custom_widget

#endif // QT5_CUSTOM_WIDGET__MAINWINDOW__MAINWINDOW_HPP_