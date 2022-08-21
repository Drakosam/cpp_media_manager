//
// Created by daki on 19.08.22.
//

#include "Collection.h"
#include <QDir>
#include <QString>

Collection::Collection() = default;

void Collection::importCollection(const QString& path) {
    QDir directory(path);
    directory.setFilter(QDir::Dirs|QDir::NoDotAndDotDot);
    QStringList entryList = directory.entryList();

    for(auto& entry:entryList){
        auto item =new CollectionItem(entry,path);
        collectionItems.push_back(item);
    }

    collectionIndex = 0;
    imageIndex = 0;
}

Collection::~Collection() {

}

QStringList Collection::getCollectionNames() {
    QStringList returnCollection;
    for(auto& item:collectionItems){
        returnCollection.push_back(item->getName());
    }
    return returnCollection;
}

QString Collection::selectCollection(int collectionNo) {
    collectionIndex = collectionNo;
    imageIndex = 0;
    qDebug() << collectionItems.at(collectionIndex)->getName();
    return getImageNow();
}

QString Collection::getImageNow() {
    return collectionItems.at(collectionIndex)->getItem(imageIndex);
}
