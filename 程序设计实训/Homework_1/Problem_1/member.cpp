#include "member.h"

Member::Member() :c_zName("?"), c_nAge(0) {}

Member::Member(std::string _name, int _age) :c_zName(_name), c_nAge(_age) {}

Member::~Member() {}

const std::string Member::getName() const { return c_zName; }

const int Member::getAge() const { return c_nAge; }

std::ostream& operator<<(std::ostream& out, const Member& src)
{
	out << "Name: " << src.getName() << ". Age: " << src.getAge() << ".";
	return out;
}