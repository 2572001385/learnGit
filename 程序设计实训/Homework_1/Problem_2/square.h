#ifndef __SQUARE__
#define __SQUARE__
#include "shape.h"

/**
* Square类，继承自Shape类，可实例化，提供获取面积的虚函数接口
* @param m_dLen:	正方形边长
*/
class Square :public Shape
{
public:
	Square(double _len);
	~Square();
	virtual double getarea();

private:
	double m_dLen;
};

#endif // !__SQUARE__
