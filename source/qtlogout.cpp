#include "qtlogout.h"
#include "ui_qtlogout.h"

qtLogout::qtLogout(QWidget *parent) :
        QMainWindow(parent, Qt::Window | Qt::WindowStaysOnTopHint | Qt::X11BypassWindowManagerHint),
        ui(new Ui::qtLogout) {
    ui->setupUi(this);
    QRect winposition = frameGeometry();
    winposition.moveCenter(QDesktopWidget().availableGeometry().center());
    move(winposition.topLeft());

    power = new LxQt::Power(this);
}

qtLogout::~qtLogout() {
    delete ui;
}

void qtLogout::on_logout_btn_clicked() {
    power->logout();
    qApp->quit();
}

void qtLogout::on_reboot_btn_clicked() {
    power->reboot();
    qApp->quit();
}

void qtLogout::on_shutdown_btn_clicked() {
    power->shutdown();
    qApp->quit();
}

void qtLogout::on_suspend_btn_clicked() {
    power->suspend();
    qApp->quit();
}

void qtLogout::on_hibernate_btn_clicked() {
    power->hibernate();
    qApp->quit();
}

void qtLogout::on_cancel_btn_clicked() {
    qApp->quit();
}

void qtLogout::on_about_btn_clicked() {
    qlHelp *show_help = new qlHelp();
    show_help->show();
}

