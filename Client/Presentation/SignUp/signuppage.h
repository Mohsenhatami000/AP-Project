#ifndef SIGNUPPAGE_H
#define SIGNUPPAGE_H

#include <QWidget>

namespace Ui {
class SignUp;
}

class SignUp : public QWidget
{
    Q_OBJECT

public:
    explicit SignUp(QWidget *parent = nullptr);
    ~SignUp();

signals:
    void backToLoginRequested();

private slots:
    void on_pushButton_back_clicked();

    void on_signup_clicked();

private:
    Ui::SignUp *ui;
};

#endif // SIGNUPPAGE_H
