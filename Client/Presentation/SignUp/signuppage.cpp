#include "signuppage.h"
#include "ui_signuppage.h"

SignUp::SignUp(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SignUp)
{
    ui->setupUi(this);
}

SignUp::~SignUp()
{
    delete ui;
}

void SignUp::on_pushButton_back_clicked()
{
    emit backToLoginRequested();
}


void SignUp::on_signup_clicked()
{
    emit backToLoginRequested();
}

