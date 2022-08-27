#include "square.h"

Square::Square(double _len) :m_dLen(_len) {}

Square::~Square() {}

double Square::getarea()
{
	return (m_dLen * m_dLen);
}