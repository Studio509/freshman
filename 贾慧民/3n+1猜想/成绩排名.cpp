#include "stdafx.h"
#include<iostream>
#include<string>
using  namespace  std;
struct  student
{
   string  name;
   string  num;
   float   soc;
}st[10];
int _tmain(int argc, _TCHAR* argv[])
{
	int i,j=0,k=0,n,max,min;
	cout<<"请输入学生成绩个数：";
	cin>>n;
	for(i=0;i<n;i++)
		cin>>st[i].name>>st[i].num>>st[i].soc;
	max=st[0].soc;
	for(i=1;i<n;i++)
	    if(max<st[i].soc)
		  {	
		     max=st[i].soc;
		     j=i;
		}
	min=st[0].soc;
	for(i=1;i<n;i++)
	   if(min>st[i].soc)
		{	
		   min=st[i].soc;
		   k=i;
	    } 
	cout<<st[j].name<<" "<<st[j].num<<endl;
	cout<<st[k].name<<" "<<st[k].num<<endl;
	return 0;
}
