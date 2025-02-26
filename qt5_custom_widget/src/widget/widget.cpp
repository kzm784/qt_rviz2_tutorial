#include "widget.hpp"

namespace qt5_custom_widget
{

ExampleWidget::ExampleWidget(QWidget * parent = nullptr) : QWidget(parent)
{
  ui.setupUi(this);
  connect(ui.example_push_button, &QPushButton::clicked, this, &ExampleWidget::onPushButtonClicked);
  ui.example_label->reset(300);
}

void ExampleWidget::onPushButtonClicked()
{
  ui.example_label->reset(300);
}

} // namespace qt5_custom_widget