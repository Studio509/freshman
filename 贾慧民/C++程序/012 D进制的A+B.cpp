#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	int n1,n2,D,sum,i,j=0,k,l,m=0,x[100];
	cin>>n1>>n2>>D;//输入A，B和D
	sum=n1+n2;//计算A+B
	for(i=1;i>0;i++)
	{	
		l=sum%D;//计算A+B的和对D取余
	    sum=sum/D;//计算A+B的和除以D的商
		  j++;//统计执行了几次
		  for(k=j-1;k<j;k++)
			  x[k]=l;//将得到的余数存放到数组中
            if(sum==0)break;//跳出循环的条件
	}

	for(i=j-1;i>=0;i--)
		m=x[i]*pow((float)10,i)+m;//计算转换进制后的数
	cout<<m;//输出转换进制后的数
	return 0;
}
