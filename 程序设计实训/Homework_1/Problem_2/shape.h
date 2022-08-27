#ifndef __SHAPE__
#define __SHAPE__

/**
* 形状，抽象类，提供获取面积的虚函数接口
*/
class Shape
{
public:
	virtual double getarea() = 0;
};

#endif // !__SHAPE__
