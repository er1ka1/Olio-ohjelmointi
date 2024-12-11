#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_btnCount_clicked()
{
    //Lisää counter muuttujaan +1
    counter++;
    //Int tyyppinen muuttuja muutetaan Qstring muotoon
    QString s = QString::number(counter);
    //teksti lineEdit:iin
    ui->txtResult->setText(s);
    //Teksti Labeliin
    ui->labelInfo->setText("Painiketta Count painettu " +QString::number(counter) + " kertaa.");
}


void MainWindow::on_btnReset_clicked()
{
    //nollataan laskuri
    counter = 0;
    //Int tyyppinen muuttuja muutetaan Qstring muotoon
    QString s = QString::number(counter);
    //Teksti lineEdit:iin
    ui->txtResult->setText(s);
    //Teksti Labeliin
    ui->labelInfo->setText("Painiketta Count painettu " +QString::number(counter) + " kertaa.");
}

