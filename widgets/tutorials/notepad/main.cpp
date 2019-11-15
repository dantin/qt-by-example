#include "notepad.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Notepad editor;
    editor.show();

    return app.exec();
}
