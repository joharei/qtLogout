#ifndef QTLOGOUT_H
#define QTLOGOUT_H

#include <QMainWindow>
#include <QDesktopWidget>
#include <LXQt/lxqtpower.h>

#include "commands.h"
#include "qlhelp.h"

namespace Ui {
    class qtLogout;
}

class qtLogout : public QMainWindow {
Q_OBJECT

public:
    explicit qtLogout(QWidget *parent = 0);

    ~qtLogout();

private slots:

    void on_logout_btn_clicked();

    void on_reboot_btn_clicked();

    void on_shutdown_btn_clicked();

    void on_suspend_btn_clicked();

    void on_cancel_btn_clicked();

    void on_about_btn_clicked();

    void on_hibernate_btn_clicked();

private:
    Ui::qtLogout *ui;
    LxQt::Power *power;
};

#endif // QTLOGOUT_H
