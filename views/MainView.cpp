//
// Created by dkiszuk on 18.08.2022.
//
#include <QDebug>

#include "MainView.h"

MainView::MainView(QMainWindow *parent) : QMainWindow(parent) {
    tabWidget = std::make_unique<QTabWidget>(this);

    image = new ShowView();
    settings = new SettingsView();

    tabWidget->addTab(image, "image");
    tabWidget->addTab(settings, "settings");

    collectionManager = new Collection();
    image->setupCollectionManager(collectionManager);

    connect(settings,
            SIGNAL(newCollectionSelected(QString)),
            this,
            SLOT( menageNewCollection(QString) ));
}

void MainView::resizeEvent(QResizeEvent *event) {
    QMainWindow::resizeEvent(event);
    tabWidget->resize(this->width(), this->height());

}

MainView::~MainView() {
    delete image;
    delete settings;
    delete collectionManager;
}

void MainView::menageNewCollection(const QString& path) {
    collectionManager->importCollection(path);
    image->setupCollectionNames();
}
