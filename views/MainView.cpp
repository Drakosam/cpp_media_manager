//
// Created by dkiszuk on 18.08.2022.
//

#include "MainView.h"

MainView::MainView(QMainWindow *parent) : QMainWindow(parent) {
    test = new QPushButton("test", reinterpret_cast<QWidget *>(this));

}

void MainView::resizeEvent(QResizeEvent *event) {
    QMainWindow::resizeEvent(event);
    test->resize(this->width(), 30);
    test->move(0, this->height()-30);
}
