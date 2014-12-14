#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mydialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->plainTextEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_Window_triggered()
{
   // MyDialog mDialog;
   // mDialog.setModal(true); //this opens the dialog box with modal,i.e user can't interact with any thing other than that dialog box
  //  mDialog.exec();
      mDialog=new MyDialog(this);  //we included MyDialog type in the class MainWindow in mainwindow.h
      mDialog->show();
}
