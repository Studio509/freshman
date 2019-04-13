#include "stdafx.h"
#include<iostream>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	int i,n,p,x[100],max,o=0,q;
	cin>>n>>p;//输入数据个数和给定参数
	for(i=0;i<n;i++)
      cin>>x[i];//输入数据
	max=x[0];//开始找最大值
	for(i=1;i<n;i++)
		if(max<x[i])
			max=x[i];//结束找最大值
	for(i=0;i<n;i++)//开始找符合条件的数字
	{	if(max%p==0)
			if(x[i]>=max/p)
				o++;//符合条件的数字个数
	    if(max%p!=0)
			if(x[i]>=max/p+1)
				o++;
	}//结束找符合条件的数字
	cout<<o;//输出符合条件的数字个数
	return 0;
}
