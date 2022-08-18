//
// Created by dkiszuk on 18.08.2022.
//
#ifndef PET_PROJECT_MAINVIEW_H
#define PET_PROJECT_MAINVIEW_H

#include <QWidget>
#include <QPushButton>
#include <QMainWindow>

class MainView : public QMainWindow {
    Q_OBJECT
public:
    explicit MainView(QMainWindow *parent = 0);

    QPushButton* test;
protected:
    void resizeEvent(QResizeEvent *event) override;
};


#endif //PET_PROJECT_MAINVIEW_H
