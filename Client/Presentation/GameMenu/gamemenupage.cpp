#include "gamemenupage.h"
#include "ui_gamemenupage.h"

GameMenuPage::GameMenuPage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::GameMenuPage)
{
    ui->setupUi(this);
}

GameMenuPage::~GameMenuPage()
{
    delete ui;
}

void GameMenuPage::on_pushButton_back_clicked()
{
    emit backToMainMenuRequested();
}

