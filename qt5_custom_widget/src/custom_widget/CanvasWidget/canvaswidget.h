#ifndef CUSTOM_WIDGET__CANVASWIDGET__CANVASWIDGET_HPP_
#define CUSTOM_WIDGET__CANVASWIDGET__CANVASWIDGET_HPP_

#include <QLabel>
#include <QPixmap>
#include <QImage>
#include <QMouseEvent>

class CanvasWidget : public QLabel
{
public:
    explicit CanvasWidget(QWidget * parent);
    ~CanvasWidget() = default;

    void drawPoint(int x, int y);
    void reset(const uint32_t size);

    void mousePressEvent(QMouseEvent * event) override;
    void mouseMoveEvent(QMouseEvent * event) override;

private:
    QPixmap loaded_image_;
    QLabel * image_window_;
};

#endif // CUSTOM_WIDGET__CANVASWIDGET__CANVASWIDGET_HPP_