//
// Created by dkiszuk on 19.08.2022.
//

#ifndef PET_PROJECT_IMAGEVIEW_H
#define PET_PROJECT_IMAGEVIEW_H
#include <QWidget>
#include <QPushButton>

class ImageView: public QWidget{
public:
    explicit ImageView(QWidget * parent = nullptr);
    ~ImageView() override;
private:
    std::unique_ptr<QPushButton> butt;

    void resizeEvent(QResizeEvent *event) override;
};
#endif //PET_PROJECT_IMAGEVIEW_H
