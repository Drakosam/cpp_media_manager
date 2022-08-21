//
// Created by dkiszuk on 19.08.2022.
//

#include "ShowView.h"


ShowView::ShowView(QWidget *parent): QWidget(parent) {
    imageArea = std::make_unique<ImageComponent>(this);
    collectionList = new CollectionListComponent(this);
    connect(collectionList, SIGNAL(collectionPicked(int)),this, SLOT(collectionChange(int)));
}

ShowView::~ShowView() {
    delete collectionList;
}

void ShowView::resizeEvent(QResizeEvent *event) {
    imageArea->resize(this->width() - 300, this->height());
    collectionList->resize(300, this->height());
    collectionList->move(this->width() - 300, 0);
}


void ShowView::setupCollectionNames() {
    collectionList->setupList(collectionManager->getCollectionNames());
}

void ShowView::setupCollectionManager(Collection* _collectionManager) {
    this->collectionManager = _collectionManager;
}

void ShowView::collectionChange(int id){
    auto item = collectionManager->selectCollection(id);
    qDebug() << item;
}