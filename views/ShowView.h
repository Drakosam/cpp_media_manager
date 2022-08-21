//
// Created by dkiszuk on 19.08.2022.
//

#ifndef PET_PROJECT_SHOWVIEW_H
#define PET_PROJECT_SHOWVIEW_H
#include <QWidget>
#include <QPushButton>
#include "../components/ImageComponent.h"
#include "../components/CollectionListComponent.h"
#include "../utylity/Collection.h"

class ShowView: public QWidget{
Q_OBJECT
public:
    explicit ShowView(QWidget * parent = nullptr);
    ~ShowView() override;
    void setupCollectionNames();
    void setupCollectionManager(Collection*);

public slots:
    void collectionChange(int id);

private:
    std::unique_ptr<ImageComponent> imageArea;
    CollectionListComponent* collectionList;
    Collection* collectionManager{};

    void resizeEvent(QResizeEvent *event) override;
};
#endif //PET_PROJECT_SHOWVIEW_H
