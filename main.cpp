#include <QApplication>
#include <QPushButton>
#include "views/MainView.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainView main_window;
    main_window.resize(800,600);
    //main_window.setTitle( "Start");
    main_window.show();

    return QApplication::exec();
}
