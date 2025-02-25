#ifndef QT5_LAYOUT__MAINWINDOW__MAINWINDOW_HPP_
#define QT5_LAYOUT__MAINWINDOW__MAINWINDOW_HPP_

#include <QMainWindow>
#include "widget/widget.hpp"

namespace qt5_layout
{

class ExampleWindow : public QMainWindow
{
public:
    explicit ExampleWindow(QWidget * = nullptr);
};

} // namespace qt5_layout

#endif // QT5_LAYOUT__MAINWINDOW__MAINWINDOW_HPP_