#include "circle.h"
#define PI 3.1416

Circle::Circle(double _radius) :m_dRadius(_radius) {}

Circle::~Circle() {}

double Circle::getarea()
{
	return (PI * m_dRadius * m_dRadius);
}