#include "Teacher.h"


Teacher::Teacher(string name, int age,int m) : m_strName(name), m_iAge(age),m_iMax(m)
{
	cout << "Teacher(string name, int age,int m)" << endl;
}
void Teacher::setName(string _name)
{
	m_strName = _name;
}

string Teacher::getName()
{
	return m_strName;
}

void Teacher::setAge(int _age)
{
	m_iAge = _age;
}

int Teacher::getAge()
{
	return m_iAge;
}

int Teacher::getMax()
{
	return m_iMax;
}
