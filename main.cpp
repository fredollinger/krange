#include "krwindow.hpp"
#include "krresults.h"
#include "tabwidget4.h"

#include <QApplication>
#include <QGroupBox>

using namespace krange;

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    KRWindow w;
    QGroupBox *groupBox = new QGroupBox("");
    QVBoxLayout *vbox = new QVBoxLayout;
    TabWidget *tabwidget = new TabWidget();
    EditorPage *pPage = new EditorPage();
    tabwidget->addEditorPage(pPage);

    KRResults *results = new KRResults();
    vbox->addWidget(tabwidget);
    vbox->addWidget(results);
    w.setCentralWidget(groupBox);
    w.show();

    return a.exec();
}
