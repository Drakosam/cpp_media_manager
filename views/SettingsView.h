//
// Created by dkiszuk on 19.08.2022.
//

#ifndef PET_PROJECT_SETTINGSVIEW_H
#define PET_PROJECT_SETTINGSVIEW_H
#include <QWidget>
#include <QPushButton>
#include <QString>

class SettingsView :public QWidget{
Q_OBJECT
public:
    explicit SettingsView(QWidget* parent = nullptr);
    ~SettingsView() override;

public slots:
    void pickCollection();

signals:
    void newCollectionSelected(const QString&);

private:
    QPushButton* btt;

    void resizeEvent(QResizeEvent *event) override;




};


#endif //PET_PROJECT_SETTINGSVIEW_H
