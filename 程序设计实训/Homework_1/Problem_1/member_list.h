#ifndef __MEMBER_LIST_H__
#define __MEMBER_LIST_H__
#include "member.h"
#include <map>

/**
* ͨ������ƴ����ѯ����
* @param m_mMemberList:	map����Ԫ�أ��洢����������
* @note:				1. �������ڣ����������-1
*						2. ͬ����Ա�������и���
*/
class MemberList
{
public:
	// ���캯��������ָ��Member��ָ����Member��������
	MemberList(Member* members, int num);
	// ��������
	~MemberList();
	// ����[]������������Ա����ƴ���������Ա����
	int operator[](std::string _name);

private:
	std::map<std::string, int> m_mMemberList;
};

#endif // !__MEMBER_LIST_H__
