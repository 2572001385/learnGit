#ifndef __CIRCLE__
#define __CIRCLE__
#include "shape.h"

/**
* Circle类，继承自Shape类，可实例化，提供获取面积的虚函数接口
* @param m_dRadius:	圆的半径
*/
class Circle :public Shape
{
public:
	Circle(double _radius);
	~Circle();
	virtual double getarea();

private:
	double m_dRadius;
};

#endif // !__CIRCLE__