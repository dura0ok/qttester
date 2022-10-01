#include "MainWindow.h"
#include "MainForm.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  ui->tableView->setShowGrid(true);
  ui->tableView->showGrid();
}

MainWindow::~MainWindow()
{
  delete ui;
}