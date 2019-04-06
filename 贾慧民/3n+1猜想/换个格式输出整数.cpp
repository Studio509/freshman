#include "stdafx.h"
#include<iostream>
using  namespace std;
void B(int  x);
int _tmain(int argc, _TCHAR* argv[])
{
	int  num;
	cout<<"请输入一个数：";
	cin>>num;
	B(num);
	return 0;
}
void B(int  x)
{
	int  i,j,k,m;
	i=x/100;
	j=x%100/10;
	m=x%100%10;
	for(k=0;k<i;k++)
		cout<<"B";
	for(k=0;k<j;k++)
		cout<<"S";
	for(k=0;k<m;k++)
		cout<<k+1;
}
