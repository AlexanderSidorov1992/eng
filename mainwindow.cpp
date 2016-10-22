#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    HorLayout = new QHBoxLayout;
    FrameLeft = new QFrame;
    HorLayout->addWidget(FrameLeft);
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
