#include "qtlogout.h"
#include "ui_qtlogout.h"

qtLogout::qtLogout(QWidget *parent) :
        QMainWindow(parent, Qt::Window | Qt::WindowStaysOnTopHint | Qt::X11BypassWindowManagerHint),
        ui(new Ui::qtLogout) {
    ui->setupUi(this);
    QRect winposition = frameGeometry();
    winposition.moveCenter(QDesktopWidget().availableGeometry().center());
    move(winposition.topLeft());
}

qtLogout::~qtLogout() {
    delete ui;
}

void qtLogout::on_logout_btn_clicked() {
    system(LOGOUT_CMD);
    qApp->quit();
}

void qtLogout::on_reboot_btn_clicked() {
    system(REBOOT_CMD);
    qApp->quit();
}

void qtLogout::on_shutdown_btn_clicked() {
    system(POWEROFF_CMD);
    qApp->quit();
}

void qtLogout::on_suspend_btn_clicked() {
    system(SUSPEND_CMD);
    qApp->quit();
}

void qtLogout::on_hibernate_btn_clicked() {
    system(HIBERNATE_CMD);
    qApp->quit();
}

void qtLogout::on_cancel_btn_clicked() {
    qApp->quit();
}

void qtLogout::on_about_btn_clicked() {

    //setDisabled(true);
    qlHelp *show_help = new qlHelp();
    show_help->show();

}

