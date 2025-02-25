#include "widget.hpp"

namespace qt5_layout
{

ExampleWidget::ExampleWidget(QWidget * parent = nullptr) : QWidget(parent)
{
    ui.setupUi(this);
    connect(ui.example_push_button, &QPushButton::clicked, this, &ExampleWidget::onPushButtonClicked);
}

void ExampleWidget::onPushButtonClicked()
{
    static uint32_t counter = 0;
    ui.example_label->setText(QString("%1").arg(++counter));
}

} // namespace qt5_layout