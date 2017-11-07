#pragma warning (disable : 4996)
#include <iostream>
#include"Info.h"
#include<cstring>
#include<time.h>
#include<math.h>
using namespace std;


void main()
{
	//Infomation *dInfo = new Infomation("투명드래곤", "브레스", "할퀴기", "꼬리치기", 300, 100, 200, 1500);
	//Infomation *hInfo = new Infomation("한조대기중", "갈래화살", "주먹치기", "화살쏘기", 200, 50, 100, 1000);
	
	//Manager *mgr = new Manager();

	Hero *hero = new Hero("한조대기중", "갈래화살", "주먹치기", "화살쏘기", 200, 50, 100, 1000);
	Dragon *dragon = new Dragon("투명드래곤", "브레스", "할퀴기", "꼬리치기", 300, 100, 200, 1500);

	Infomation *info = new Infomation();
	
	info->ShowStatus();
	

	//delete info;
}