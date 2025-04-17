#include "mainwindow.h"

#include <QApplication>
#include <QIcon>
#include <QDir>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QString imagePath = QDir::currentPath() + "/icon.ico";

    w.setFixedSize(504,307);
    w.setWindowFlags(Qt::FramelessWindowHint);
    w.setAttribute(Qt::WA_TranslucentBackground);
    w.setWindowTitle("Wrong Text");
    w.setWindowIcon(QIcon(imagePath)); // Шлях до іконки без ресурсу
    w.show();
    return a.exec();
}
