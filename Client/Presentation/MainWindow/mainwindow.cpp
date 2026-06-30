#include "mainwindow.h"
#include "../Login/loginpage.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    LoginPage *loginPage = new LoginPage(this);
    ui->stackedWidget->addWidget(loginPage);
    ui->stackedWidget->setCurrentIndex(0);
    ui->stackedWidget->setCurrentWidget(loginPage);
}

MainWindow::~MainWindow()
{
    delete ui;
}
