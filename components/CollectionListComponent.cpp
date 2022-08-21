//
// Created by daki on 21.08.22.
//

#include "CollectionListComponent.h"
#include <QStringList>


CollectionListComponent::CollectionListComponent(QWidget* parent): QWidget(parent){
    listView = new QListWidget(this);
    connect(listView, SIGNAL(currentRowChanged(int)),this, SLOT(onCollectionPicked(int)));
}

void CollectionListComponent::setupList(const QStringList &list) {
    listView->clear();
    for(auto& item:list){
        listView->addItem(item);
    }
}

void CollectionListComponent::resizeEvent(QResizeEvent *event) {
    listView->resize(this->width(), this->height());
    QWidget::resizeEvent(event);

}

void CollectionListComponent::onCollectionPicked(int currentRow){
    emit collectionPicked(currentRow);
}