//
// Created by dkiszuk on 18.08.2022.
//
#ifndef PET_PROJECT_MAINVIEW_H
#define PET_PROJECT_MAINVIEW_H

#include <QPushButton>
#include <QMainWindow>
#include <QTabWidget>
#include "ImageView.h"
#include "SettingsView.h"

class MainView : public QMainWindow {
    Q_OBJECT
public:
    explicit MainView(QMainWindow *parent = nullptr);
    ~MainView() override;

protected:
    std::unique_ptr<QTabWidget> tabWidget;
    ImageView* image;
    SettingsView* settings;

    void resizeEvent(QResizeEvent *event) override;
};


#endif //PET_PROJECT_MAINVIEW_H
