#pragma warning (disable : 4996)
#include <iostream>
#include"Info.h"
#include<cstring>
#include<time.h>
#include<math.h>
using namespace std;


void main()
{
	//Infomation *dInfo = new Infomation("����巡��", "�극��", "������", "����ġ��", 300, 100, 200, 1500);
	//Infomation *hInfo = new Infomation("���������", "����ȭ��", "�ָ�ġ��", "ȭ����", 200, 50, 100, 1000);
	
	//Manager *mgr = new Manager();

	Hero *hero = new Hero("���������", "����ȭ��", "�ָ�ġ��", "ȭ����", 200, 50, 100, 1000);
	Dragon *dragon = new Dragon("����巡��", "�극��", "������", "����ġ��", 300, 100, 200, 1500);

	Infomation *info = new Infomation();
	
	info->ShowStatus();
	

	//delete info;
}