//
// Created by dkiszuk on 18.08.2022.
//

#include "MainView.h"

#include <memory>

MainView::MainView(QMainWindow *parent) : QMainWindow(parent) {
    tabWidget = std::make_unique<QTabWidget>(this);

    image = new ImageView();
    settings = new SettingsView();

    tabWidget->addTab(image, "image");
    tabWidget->addTab(settings, "settings");
}

void MainView::resizeEvent(QResizeEvent *event) {
    QMainWindow::resizeEvent(event);
    tabWidget->resize(this->width(), this->height());

}

MainView::~MainView() {
    delete image;
    delete settings;
}
