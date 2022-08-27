#ifndef __MEMBER_H__
#define __MEMBER_H__
#include <iostream>

/**
* �����Ա����
* @param c_zName:	��Ա����
* @param c_nAge:	��Ա����
* @note:			1. ���������Ҫ�������������䣬Ĭ������Ϊ"?",����Ϊ0.
*/
class Member
{
public:
	// ���캯��
	Member();
	Member(std::string _name, int _age);
	// ��������
	~Member();
	// ���˽�б���
	const std::string getName() const;
	const int getAge() const;
	// ��������������
	friend std::ostream& operator<<(std::ostream& out, const Member& src);

private:
	const std::string c_zName;
	const int c_nAge;
};

#endif // !__MEMBER_H__