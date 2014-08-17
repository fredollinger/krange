#include <QMainWindow>
#include "ui_krwindow.h"

namespace Ui {
class KRWindow;
}

class KRWindow : public QMainWindow {
Q_OBJECT

public:
   explicit KRWindow(QWidget *parent = 0);
   ~KRWindow();

private:
   Ui::KRWindow *ui;
};

