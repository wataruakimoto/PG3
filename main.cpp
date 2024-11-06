#include "Circle.h"
#include "Rectangle.h"

int main() {

	Circle circle(4.0f);
	Rectangle rectangle(3.0f, 5.0f);

	circle.Draw();
	rectangle.Draw();

	return 0;
}