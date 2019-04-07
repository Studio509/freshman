
#include "stdafx.h"
#include"student.h"
#include<iostream>
#include<string>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{student stu[3]={student("001","张红","女"),student("002","李江"),student("003","王琴","女")};
 int i;
 for(i=0;i<=2;i++)
 {stu[i].output();},,,
	return 0;
}

