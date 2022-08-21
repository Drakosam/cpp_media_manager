//
// Created by daki on 19.08.22.
//

#include "CollectionItem.h"

#include <utility>
#include <QDir>

CollectionItem::CollectionItem(const QString& name, const QString&  root_path) {
    this->name =name;
    this->path = root_path;
}

QString CollectionItem::getName() {
    return this->name;
}

QString CollectionItem::getItem(int itemNo) {
    if(items.isEmpty()){
        fillItems();
    }
    if((itemNo < items.size()) and (itemNo >= 0)){
        return path + QDir::separator() + name + QDir::separator() + items.at(itemNo);
    }
    return "";
}

void CollectionItem::fillItems() {
    QDir dirPicker(path + QDir::separator() + name);
    dirPicker.setFilter(QDir::Files|QDir::NoDotAndDotDot);
    items = dirPicker.entryList();
}
