//
// Created by daki on 19.08.22.
//

#ifndef PET_PROJECT_COLLECTION_H
#define PET_PROJECT_COLLECTION_H


#include <QString>
#include "CollectionItem.h"

class Collection {
public:
    explicit Collection();
    ~Collection();

    void importCollection(const QString& path);

    QStringList getCollectionNames();

    QString getImageNow();
    QString selectCollection(int collectionNo);

private:
    int collectionIndex;
    int imageIndex;
    std::vector<CollectionItem*> collectionItems;

};


#endif //PET_PROJECT_COLLECTION_H
