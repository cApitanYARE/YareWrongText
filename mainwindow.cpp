#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QString>
#include <QClipboard>

#include "ButtKeyboard.h"




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

QString output;



void MainWindow::on_btnCorrect_clicked()
{
    QString wrongText = ui->textWrong->toPlainText();
    output = transliterateToUkrainian(wrongText);
    ui->textCorrect->setPlainText(output);
}


void MainWindow::on_brnClose_clicked()
{
       this->close();
}




void MainWindow::on_btn_clear_clicked()
{
    ui->textWrong->clear();
    ui->textCorrect->clear();
}


void MainWindow::on_btnCopy_clicked()
{
    QString textToCopy = ui->textCorrect->toPlainText();

    QClipboard *clipboard = QApplication::clipboard();

    // Копіювання тексту в буфер обміну
    clipboard->setText(textToCopy);
}

