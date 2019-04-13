#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	string str;
	int n,i,j;
	cin>>n>>str;  //输入边长符号个数和符号种类
	for(i=1;i<n/2+1;i++)
		if(i==1||i==n/2) //确定第一行和最后一行输出符号个数个符号
			{for(j=0;j<n;j++)
				cout<<str;
	         cout<<endl;}
		else     //除了第一行和最后一行其他都是第一列和最后一列输出符号
			{cout<<str;
			for(j=0;j<n-2;j++)
				cout<<" ";
			cout<<str<<endl;}
	return 0;
}
