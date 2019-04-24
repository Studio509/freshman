#include "stdafx.h"
#include<iostream>
using namespace  std;
int _tmain(int argc, _TCHAR* argv[])
{
	int x[100],y[100],i,j,k,l=0,m=0,n,z;
	cin>>n;//输入数字个数
	for(i=0;i<n;i++)
		cin>>x[i];//输入数字数值
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(i!=j)//判断下标是否相等
			 {  l++;//统计组成两位数的个数
	            for(k=l-1;k<l;k++)
					y[k]=x[i]*10+x[j];}//将两位数存到一个数组中
	for(i=0;i<l;i++)
		m=y[i]+m;//对数组中的元素求和（组成的两位数之和）
	cout<<m;//输出求和结果
	return 0;
}
