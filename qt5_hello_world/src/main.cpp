#include <QApplication>
#include <QMainWindow>

#include "ui_qt5_hello_world.h"

class ExampleWidget : public QWidget
{
public:
    explicit ExampleWidget(QWidget *parent = nullptr) : QWidget(parent)
    {
        ui.setupUi(this);
        connect(ui.example_push_button, &QPushButton::clicked, this, &ExampleWidget::onPushButtonClicked);
    }

private:
    void onPushButtonClicked()
    {
        static uint32_t counter = 0;
        ui.example_label->setText(QString("%1").arg(++counter));
    }

private:
    Ui::ExampleWidget ui;
};

class ExampleWindow : public QMainWindow
{
public:
    explicit ExampleWindow(QWidget *parent = nullptr) : QMainWindow(parent)
    {
        setWindowTitle("Hello, Qt5!");
        resize(800, 800);
        setCentralWidget(new ExampleWidget(this));
    }
};

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    ExampleWindow window;
    window.show();
    return app.exec();
}