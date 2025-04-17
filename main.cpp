#include "mainwindow.h"

#include <QApplication>
#include <QIcon>
#include <QDir>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QString imagePath = QCoreApplication::applicationDirPath();
    QDir dir(imagePath);
    dir.cdUp();
    dir.cdUp();
    dir.cdUp();
    QString iconPath = dir.absoluteFilePath("icon.ico");

    qDebug() << iconPath;
    w.setFixedSize(504,307);
    w.setWindowFlags(Qt::FramelessWindowHint);
    w.setAttribute(Qt::WA_TranslucentBackground);
    w.setWindowTitle("Wrong Text");
    w.setWindowIcon(QIcon(iconPath)); // Шлях до іконки без ресурсу
    if (QFile::exists(iconPath)) {
        qDebug() << "Icon exists at:" << iconPath;
        w.setWindowIcon(QIcon(iconPath));
    } else {
        qDebug() << "Icon NOT FOUND at:" << iconPath;
    }
    w.show();
    return a.exec();
}
