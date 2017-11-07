#pragma warning (disable : 4996)
#include <iostream>
#include"Info.h"
#include<cstring>

using namespace std;
Dragon::Dragon()
{
}
Dragon::Dragon(char *_name, char *_skill1_name, char *_skill2_name, char *_skill3_name, const int &_skill1, const int &_skill2, const int &_skill3, int _hp)
{
	int len = strlen(_name) + 1;
	m_name = new char[len];
	strcpy(m_name, _name);

	len = strlen(_skill1_name) + 1;
	m_skill1_name = new char[len];
	strcpy(m_skill1_name, _skill1_name);

	len = strlen(_skill2_name) + 1;
	m_skill2_name = new char[len];
	strcpy(m_skill2_name, _skill2_name);

	len = strlen(_skill3_name) + 1;
	m_skill3_name = new char[len];
	strcpy(m_skill3_name, _skill3_name);

	m_skill1 = _skill1;
	m_skill2 = _skill2;
	m_skill3 = _skill3;
	m_nHp = _hp;
}

void Dragon::ShowStatus() const
{
	cout << m_name <<"�� �������ͽ�" << endl;
	cout << "HP :" << m_nHp << ' ' << "��ų1 :" << m_skill1_name << ' ' << "��ų2 : " << m_skill2_name << ' ' << "��ų3 : " << m_skill3_name << endl;
}

int Dragon::GetSkillDamage1() const
{
	cout << m_name << "��" << m_skill1_name << "�� ��� �ߴ�." << endl;
	cout << m_skill1 << "�� �������� �־���!" << endl;
	return m_skill1;
}
int Dragon::GetSkillDamage2() const
{
	cout << m_name << "��" << m_skill2_name << "�� ��� �ߴ�." << endl;
	cout << m_skill2 << "�� �������� �־���!" << endl;
	return m_skill2;
}
int Dragon::GetSkillDamage3() const
{
	cout << m_name << "��" << m_skill3_name << "�� ��� �ߴ�." << endl;
	cout << m_skill3 << "�� �������� �־���!" << endl;
	return m_skill3;
}
char *Dragon::GetSkillName1() const
{
	return m_skill1_name;
}
char *Dragon::GetSkillName2() const
{
	return m_skill2_name;
}
char *Dragon::GetSkillName3() const
{
	return m_skill3_name;
}
char *Dragon::GetName() const
{
	return m_name;
}