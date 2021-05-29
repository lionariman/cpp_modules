#include "Replace.hpp"

Replace::Replace() {}
Replace::~Replace() {}

string Replace::getName(void)
{
	return this->_name;
}

string Replace::getS1(void)
{
	return this->_s1;
}

string Replace::getS2(void)
{
	return this->_s2;
}

void    Replace::setName(string name)
{
	this->_name = name;
}

void    Replace::setS1(string s1)
{
	this->_s1 = s1;
}

void    Replace::setS2(string s2)
{
	this->_s2 = s2;
}
