#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "../Login/loginpage.h"
#include "../SignUp/signuppage.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void showSignupPage();
    void showLoginPage();

private:

    Ui::MainWindow *ui;

    LoginPage *loginPage;

    SignUp *signUpPage;
};

#endif // MAINWINDOW_H
