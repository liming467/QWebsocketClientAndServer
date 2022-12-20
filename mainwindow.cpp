#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->tabWidget, &QTabWidget::currentChanged, this, &MainWindow::on_tabPageChanged);
    changeWindowTitle();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_tabPageChanged(int index)
{
    qDebug() << index;
    changeWindowTitle();
}

void MainWindow::changeWindowTitle()
{
	int nowIndex = ui->tabWidget->currentIndex();
	setWindowTitle(nowIndex == 0 ? "Client" : "Server");
}
