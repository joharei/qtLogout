#include "qlhelp.h"
#include "ui_qlhelp.h"

qlHelp::qlHelp(QWidget *parent) :
        QFrame(parent, Qt::X11BypassWindowManagerHint),
        ui(new Ui::qlHelp) {
    ui->setupUi(this);

    setWindowModality(Qt::ApplicationModal);

    QRect winposition = frameGeometry();
    winposition.moveCenter(QDesktopWidget().availableGeometry().center());
    move(winposition.topLeft());
}

qlHelp::~qlHelp() {
    delete ui;
}

void qlHelp::on_pushButton_clicked() {

}
