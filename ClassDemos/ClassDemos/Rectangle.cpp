#include "Vector2.h"

class Rectangle
{
public:
	Vector2 coordinate;
	float getHeight() { return height; }
	void setHeight(float height) { this->height = height; }

	float getWidth() { return width; }
	void setWidth(float width) { this->width = width; }

	float area();
	float parameter();

private:
	float height;
	float width;
};

float Rectangle::area()
{
	return (height * width);
}

float Rectangle::parameter()
{
	return (height * 2 + width * 2);
}