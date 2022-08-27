#ifndef __MEMBER_H__
#define __MEMBER_H__
#include <iostream>

/**
* 定义队员对象
* @param c_zName:	队员姓名
* @param c_nAge:	队员年龄
* @note:			1. 构造对象需要传入姓名与年龄，默认姓名为"?",年龄为0.
*/
class Member
{
public:
	// 构造函数
	Member();
	Member(std::string _name, int _age);
	// 析构函数
	~Member();
	// 获得私有变量
	const std::string getName() const;
	const int getAge() const;
	// 重载输出流运算符
	friend std::ostream& operator<<(std::ostream& out, const Member& src);

private:
	const std::string c_zName;
	const int c_nAge;
};

#endif // !__MEMBER_H__