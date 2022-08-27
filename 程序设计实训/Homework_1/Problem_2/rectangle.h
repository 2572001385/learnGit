#ifndef __RECTANGLE__
#define __RECTANGLE__
#include "shape.h"

/**
* Rectangle�࣬�̳���Shape�࣬��ʵ�������ṩ��ȡ������麯���ӿ�
* @param m_dWidth:	�����γ�
* @param m_dHeight:	�����ο�
*/
class Rectangle :public Shape
{
public:
	Rectangle(double _width, double _height);
	~Rectangle();
	virtual double getarea();

private:
	double m_dWidth;
	double m_dHeight;
};

#endif // !__RECTANGLE__