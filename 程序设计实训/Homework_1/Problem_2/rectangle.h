#ifndef __RECTANGLE__
#define __RECTANGLE__
#include "shape.h"

/**
* Rectangle类，继承自Shape类，可实例化，提供获取面积的虚函数接口
* @param m_dWidth:	长方形长
* @param m_dHeight:	长方形宽
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