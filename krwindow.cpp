#include "krwindow.hpp"

KRWindow::KRWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::KRWindow) {

    ui->setupUi(this);
}

KRWindow::~KRWindow() { delete ui; }

