#include "member_list.h"

MemberList::MemberList(Member* members, int num)
{
	for (int i = 0; i < num; i++)
	{
		m_mMemberList[members[i].getName()] = members[i].getAge();
	}
}

MemberList::~MemberList() {}

int MemberList::operator[](std::string _name)
{
	if (m_mMemberList.find(_name) == m_mMemberList.end())
	{
		return -1;
	}
	else
	{
		return m_mMemberList[_name];
	}
}