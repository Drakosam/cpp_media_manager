//
// Created by daki on 19.08.22.
//

#ifndef PET_PROJECT_COLLECTIONITEM_H
#define PET_PROJECT_COLLECTIONITEM_H
#include <QString>
#include <QStringList>

class CollectionItem {

public:
    explicit CollectionItem(const QString&  name, const QString&  root_path);
    QString getName();
    QString getItem(int);
private:
    QString name;
    QString path;
    QStringList items;

    void fillItems();
};


#endif //PET_PROJECT_COLLECTIONITEM_H
