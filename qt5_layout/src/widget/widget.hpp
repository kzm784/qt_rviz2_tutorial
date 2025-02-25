#ifndef QT5_LAYOUT__WIDGET__WIDGET_HPP_
#define QT5_LAYOUT__WIDGET__WIDGET_HPP_

#include "ui_qt5_layout.h"

namespace qt5_layout
{

class ExampleWidget : public QWidget
{
public:
    explicit ExampleWidget(QWidget *);

private:
    void onPushButtonClicked();

private:
    Ui::ExampleWidget ui;
};

} // namespace qt5_layout

#endif // QT5_LAYOUT__WIDGET__WIDGET_HPP_