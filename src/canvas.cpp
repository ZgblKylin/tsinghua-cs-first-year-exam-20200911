#include "canvas.h"
#include "ui_canvas.h"

#include <QMouseEvent>
#include <QPainter>

Canvas::Canvas(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Canvas)
{
    ui->setupUi(this);
    clear();
}

Canvas::~Canvas()
{
    delete ui;
}

void Canvas::open()
{
    // TODO
}

void Canvas::save()
{
    // TODO
}

void Canvas::clear()
{
    count = 0;

    // 请求重绘
    update();
}

void Canvas::mousePressEvent(QMouseEvent *event)
{
    // TODO
}

void Canvas::mouseReleaseEvent(QMouseEvent *event)
{
    // TODO
}

void Canvas::mouseMoveEvent(QMouseEvent *event)
{
    // TODO
}

void Canvas::mouseDoubleClickEvent(QMouseEvent *event)
{
    // 双击生成正方形
    if (count < 6)
    {
        // 事件位置为 Canvas 坐标，需要转换为 canvas 坐标
        QRect squareRect(0, 0, 60, 60);
        squareRect.moveCenter(event->pos());
        squares[count] = squareRect;
        ++count;
    }

    // 请求重绘
    update();
}

void Canvas::keyPressEvent(QKeyEvent *event)
{
    // TODO
}

void Canvas::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    // 背景为白色
    painter.fillRect(QRect(0, 0, 600, 600), Qt::white);

    // 按照序号绘制正方形，及先后覆盖关系
    for (int i = 0; i < count; ++i)
    {
        // 未选中正方形，填充蓝色，边框黑色
        painter.fillRect(squares[i], Qt::blue);
        painter.setPen(Qt::black);
        painter.drawRect(squares[i]);
    }
}
