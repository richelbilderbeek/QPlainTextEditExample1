#include <QApplication>
#include <QPlainTextEdit>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  auto * const edit = new QPlainTextEdit("My plain text edit");
  edit->setGeometry(0, 0, 320, 200);
  edit->show();
  return a.exec();
}

