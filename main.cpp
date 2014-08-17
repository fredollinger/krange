#include "krwindow.hpp"
#include <QApplication>
#include "tabwidget4.h"

using namespace krange;

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    KRWindow w;

    TabWidget *tabwidget = new TabWidget();
    w.setCentralWidget(tabwidget);

    w.show();

    return a.exec();
}
