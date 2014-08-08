#include "krwindow.hpp"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    KRWindow w;
    w.show();

    return a.exec();
}
