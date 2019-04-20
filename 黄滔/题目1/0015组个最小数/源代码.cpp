#include<iostream>
#include<string>
using namespace std;
int main()
{
	int a[10],b[50],c[10]={0,1,2,3,4,5,6,7,8,9},i,k,x=0,y=0;//a[]表示0`9每个数的个数
	for(i=0;i<10;i++)//在一行中给出 10 个非负整数，顺序表示我们拥有数字 0、数字 1、……数字 9 的个数。整数间用一个空格分隔。
	{
		cin>>a[i];
	}
	for(i=0;i<10;i++)
	{
	  x=x+a[i];//求一共有多少个数
	}
    int j=0;
	for(i=0;i<10;i++)//b[]给定数字 0-9 各若干个
	{   if(a[i]==0)
	    continue;
		for(k=0;k<a[i];k++)
		{
			 b[j]=c[i];j++;
		}
	}
	for(int j=0;j<x;j++)//外循环
	{
		for(i=0;i<x-j-1;i++)//内循环排序
			{
			if(b[i]>b[i+1])
			{
				y=b[i+1];
				b[i+1]=b[i];
				b[i]=y;
				}
		    }
	}
	if(b[0]==0)
	{
		for(i=0;i<10;i++)
		{
				if(b[i]!=0)
				{
				b[0]=b[i];
				b[i]=0;
				break;
				}
		}
	}
	if(a[0]!=x)
	{
	for(i=0;i<x;i++)
		cout<<b[i];}
	else
		cout<<"0";
	return 0;
}
