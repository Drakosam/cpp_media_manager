//
// Created by dkiszuk on 18.08.2022.
//
#ifndef PET_PROJECT_MAINVIEW_H
#define PET_PROJECT_MAINVIEW_H

#include <QPushButton>
#include <QMainWindow>
#include <QTabWidget>
#include <QString>
#include "ShowView.h"
#include "SettingsView.h"
#include "../utylity/Collection.h"

class MainView : public QMainWindow {
    Q_OBJECT
public:
    explicit MainView(QMainWindow *parent = nullptr);
    ~MainView() override;

public slots:
    void menageNewCollection(const QString&);

private:
    std::unique_ptr<QTabWidget> tabWidget;
    Collection *collectionManager;
    ShowView* image;
    SettingsView* settings;

    void resizeEvent(QResizeEvent *event) override;
};


#endif //PET_PROJECT_MAINVIEW_H
