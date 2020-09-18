#include "canvas.h"
#include "ui_canvas.h"

Canvas::Canvas(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Canvas)
{
    ui->setupUi(this);
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
    // TODO
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
    // TODO
}

void Canvas::keyPressEvent(QKeyEvent *event)
{
    // TODO
}

void Canvas::paintEvent(QPaintEvent *event)
{
    // TODO
}
