#include "rectangle.h"

Rectangle::Rectangle(double _width, double _height) :m_dWidth(_width), m_dHeight(_height) {}

Rectangle::~Rectangle() {}

double Rectangle::getarea()
{
	return (m_dWidth * m_dHeight);
}