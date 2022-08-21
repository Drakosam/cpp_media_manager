//
// Created by daki on 21.08.22.
//

#ifndef PET_PROJECT_COLLECTIONLISTCOMPONENT_H
#define PET_PROJECT_COLLECTIONLISTCOMPONENT_H

#include <QWidget>
#include <QListWidget>
#include <QPushButton>

class CollectionListComponent: public QWidget{
Q_OBJECT
public:
    explicit CollectionListComponent(QWidget * parent = nullptr);
    void setupList(const QStringList& list);

public slots:
    void onCollectionPicked(int currentRow);

signals:
    void collectionPicked(int collectionPick);

private:
    QListWidget* listView;
    void resizeEvent(QResizeEvent *event) override;


};


#endif //PET_PROJECT_COLLECTIONLISTCOMPONENT_H
