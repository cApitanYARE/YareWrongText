#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_btnCorrect_clicked();
    void on_brnClose_clicked();
    void on_btn_clear_clicked();
    void on_btnCopy_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H