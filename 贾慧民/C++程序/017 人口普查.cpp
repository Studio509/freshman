#include "stdafx.h"
#include<iostream>
#include<string>
using  namespace std;
struct  people
{
	string  name;
	string  birthday;
};
int _tmain(int argc, _TCHAR* argv[])
{
	people a[100],b[100],max,min;
	string str;
	int n,i,j=0,k,l=0,m=0;
	cin>>n;  //输入人口个数
	for(i=0;i<n;i++)
		cin>>a[i].name>>a[i].birthday;//输入基本信息
	for(i=0;i<n;i++)
		if(a[i].birthday>"1818/9/6"&&a[i].birthday<"2018/9/6")//判断是否小于于200岁
			{
				j++;//统计符合的人口个数
	           for(k=j-1;k<j;k++)//将符合的存放到另一个结构体数组中
			    { b[k].name=a[i].name;
			     b[k].birthday=a[i].birthday;}
	} 
	max.birthday= b[0].birthday; //开始找年龄最小的人
	max.name=b[0].name;
	for(i=1;i<j;i++)
	if(max.birthday<b[i].birthday)
	{ max.birthday=b[i].birthday;
	  max.name=b[i].name;
	}    //结束找年龄最小的人  
	   min.birthday= b[0].birthday;//开始找年龄最大的人
	   min.name=b[0].name;	
	for(i=1;i<j;i++)
	if(min.birthday>b[i].birthday)
	{	min.birthday=b[i].birthday;
        min.name=b[i].name;	  
	}    //结束找年龄最大的人  
	cout<<" "<<j<<" ";//输出符合人口的个数
	cout<<min.name<<" ";//输出年最大的人的名字
	cout<<max.name;//输出年最小的人的名字
	return 0;
}
