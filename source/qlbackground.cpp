#include "qlbackground.h"
#include "ui_qlbackground.h"

qlBackground::qlBackground(QWidget *parent) :
        QFrame(parent, Qt::Window | Qt::X11BypassWindowManagerHint),
        ui(new Ui::qlBackground) {
    ui->setupUi(this);
    const int scr_width = QApplication::desktop()->width();
    const int scr_height = QApplication::desktop()->height();
    setGeometry(0, 0, scr_width, scr_height);
    setStyleSheet("background-color: rgb(0,0,0);");
    setWindowOpacity(0.85);
}

qlBackground::~qlBackground() {
    delete ui;
}
