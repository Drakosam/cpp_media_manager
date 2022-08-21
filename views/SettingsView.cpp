//
// Created by dkiszuk on 19.08.2022.
//

#include "SettingsView.h"
#include <QDebug>
#include <QFileDialog>

SettingsView::SettingsView(QWidget *parent): QWidget(parent) {
    btt = new QPushButton(this);
    btt->setText("pick collection");
    btt->resize(200,30);
    connect(this->btt, SIGNAL(clicked()),this, SLOT(pickCollection()));
}

SettingsView::~SettingsView() {
}

void SettingsView::resizeEvent(QResizeEvent *event) {
    QWidget::resizeEvent(event);

}

void SettingsView::pickCollection() {
    QString collection_path = QFileDialog::getExistingDirectory(this);
    emit newCollectionSelected(collection_path);
}


