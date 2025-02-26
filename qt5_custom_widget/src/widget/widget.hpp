#ifndef QT5_CUSTOM_WIDGET__WIDGET__WIDGET_HPP_
#define QT5_CUSTOM_WIDGET__WIDGET__WIDGET_HPP_

#include "ui_qt5_custom_widget.h"

namespace qt5_custom_widget
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

} // namespace qt5_custom_widget

#endif // QT5_CUSTOM_WIDGET__WIDGET__WIDGET_HPP_