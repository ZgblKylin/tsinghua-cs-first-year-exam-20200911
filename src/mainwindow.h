#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
// 将 canvas 控件通过“提升”操作提升为 Canvas 对象
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    // on_控件名_槽函数 自动连接信号槽
    void on_open_triggered();
    void on_save_triggered();
    void on_clear_triggered();
    void on_exit_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
