#include "mainmenupage.h"
#include "ui_mainmenupage.h"

MainMenuPage::MainMenuPage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainMenuPage)
{
    ui->setupUi(this);
}

MainMenuPage::~MainMenuPage()
{
    delete ui;
}

void MainMenuPage::on_pushButton_quit_clicked()
{
    emit quitRequested();
}


void MainMenuPage::on_pushButton_edit_profile_clicked()
{
    emit editProfileRequested();
}

