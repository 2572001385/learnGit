#ifndef __CIRCLE__
#define __CIRCLE__
#include "shape.h"

/**
* Circle�࣬�̳���Shape�࣬��ʵ�������ṩ��ȡ������麯���ӿ�
* @param m_dRadius:	Բ�İ뾶
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