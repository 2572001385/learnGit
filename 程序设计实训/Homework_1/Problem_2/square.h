#ifndef __SQUARE__
#define __SQUARE__
#include "shape.h"

/**
* Square�࣬�̳���Shape�࣬��ʵ�������ṩ��ȡ������麯���ӿ�
* @param m_dLen:	�����α߳�
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
