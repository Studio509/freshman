#include "stdafx.h"
#include<iostream>
using  namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	int n,i,j,k,l,n1,m,x[100],o=0,p=0,q=0;
	cin>>n;//输入学生成绩的个数
	for(i=0;i<n;i++)
		cin>>x[i];//输入学生成绩
	cin>>n1>>k>>l>>m;//输入要查询成绩的个数及要查询的分数
	for(i=0;i<n;i++)
		{if(x[i]==k)
			o++;    //符合第查询的人数
	     if(x[i]==l)
			p++;    //符合第查询的人数
         if(x[i]==m)
			 q++;} //符合第查询的人数
	cout<<o<<" "<<p<<" "<<q;//输出符合查询的人数
	return 0;
}
