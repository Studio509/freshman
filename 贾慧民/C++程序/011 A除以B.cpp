#include "stdafx.h"
#include<iostream>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	int a,R;
	long long   int  Q,num;
	cin>>num>>a;//输入被除数与除数
	Q=num/a;//计算商
	R=num%a;//计算余数
	cout<<Q<<" "<<R;//输出商与余数
	return 0;
}
