#include "Circle.h"
#include <numbers>
#include <stdio.h>

void Circle::Size() {

	area_ = std::numbers::pi_v<float> * radius_ * radius_;
}

void Circle::Draw() {

	Size();

	printf("円の半径は %.1f で面積は %f です\n", radius_, area_);
}