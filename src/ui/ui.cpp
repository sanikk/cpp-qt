#include "ui.h"
#include <qgroupbox.h>
#include <qnamespace.h>

Ui::Ui() {
  QLabel *hello = new QLabel("Hello world!", this);
  hello->setAlignment(Qt::AlignCenter);
  setWindowTitle("QT STARTER");
  resize(800,600);

}
