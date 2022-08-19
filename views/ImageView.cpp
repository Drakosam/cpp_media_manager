//
// Created by dkiszuk on 19.08.2022.
//

#include "ImageView.h"

ImageView::ImageView(QWidget *parent) {
    butt = std::make_unique<QPushButton>(this);
    butt->setText("Test");
}

ImageView::~ImageView() {
}

void ImageView::resizeEvent(QResizeEvent *event) {
    butt->resize(this->width(),30);
    butt->move(0, this->height()-30);
}
