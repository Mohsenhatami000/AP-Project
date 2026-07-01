#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    loginPage = new LoginPage(this);
    signUpPage = new SignUp(this);

    ui->stackedWidget->addWidget(signUpPage);
    ui->stackedWidget->addWidget(loginPage);

    ui->stackedWidget->setCurrentWidget(loginPage);


    connect(loginPage,
            &LoginPage::signUpRequested,
            this,
            &MainWindow::showSignupPage);

    connect(signUpPage,
            &SignUp::backToLoginRequested,
            this,
            &MainWindow::showLoginPage);

}

void MainWindow::showSignupPage(){
    ui->stackedWidget->setCurrentWidget(signUpPage);

}

void MainWindow::showLoginPage(){
    ui->stackedWidget->setCurrentWidget(loginPage);
}

MainWindow::~MainWindow()
{
    delete ui;
}
