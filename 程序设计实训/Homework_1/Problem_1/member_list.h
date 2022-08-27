#ifndef __MEMBER_LIST_H__
#define __MEMBER_LIST_H__
#include "member.h"
#include <map>

/**
* 通过姓名拼音查询年龄
* @param m_mMemberList:	map类型元素，存储姓名与年龄
* @note:				1. 若不存在，则年龄输出-1
*						2. 同名队员年龄会进行覆盖
*/
class MemberList
{
public:
	// 构造函数，传入指向Member的指针与Member的总数量
	MemberList(Member* members, int num);
	// 析构函数
	~MemberList();
	// 重载[]运算符，输入队员姓名拼音，输出队员年龄
	int operator[](std::string _name);

private:
	std::map<std::string, int> m_mMemberList;
};

#endif // !__MEMBER_LIST_H__
