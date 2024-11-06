#include "Rectangle.h"
#include <stdio.h>

void Rectangle::Size() {

	area_ = width_ * height_;
}

void Rectangle::Draw() {

	Size();

	printf("矩形の幅は %.1f で高さは %.1f で面積は %.1f です\n", width_, height_, area_);
}