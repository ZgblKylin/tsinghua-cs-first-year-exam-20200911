#ifndef CANVAS_H
#define CANVAS_H

#include <QWidget>

namespace Ui {
// 设置 minimumSize 和 maximumSize 为 600x600
// 设置 sizePolicy 为 Fixed 以避免 layout 干扰
class Canvas;
}

class Canvas : public QWidget
{
    Q_OBJECT

public:
    explicit Canvas(QWidget *parent = nullptr);
    ~Canvas();

    void open();
    void save();
    void clear();

    // QWidget interface
protected:
    /* public QMainWindow —— 右键 —— reafactor ——
     * Insert Virutal Functions of Base Classes，重载鼠标键盘事件 */
    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseDoubleClickEvent(QMouseEvent *event) override;
    void keyPressEvent(QKeyEvent *event) override;
    void paintEvent(QPaintEvent *event) override;

private:
    Ui::Canvas *ui;

    QRect squares[6]; // 最多6个正方形，固定尺寸、样式、遮挡关系，只需记录位置
    int count; // 正方形数量
};

#endif // CANVAS_H
