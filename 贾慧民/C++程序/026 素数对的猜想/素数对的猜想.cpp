#include "stdafx.h"
#include<iostream>
using  namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	
	int x,i,j,k=0,z[1000],N,l,m=0;
	cin>>N;//输入临界值
	for(i=3;i<=N;i++)//开始判断小于等于临界值的素数
		for(j=2;j<i;j++)
			{if(i%j==0)break;
				if(j==i-1)
				{	k++;//统计小于等于临界值的素数的个数
	              for(x=k;x<k+1;x++)
                   z[x]=i;//小于等于临界值的素数的放到一个数组中
				}}
	z[0]=2;//结束判断小于等于临界值的素数
	for(i=0;i<k+1;i++)//开始找符合相邻素数相差为偶数的素数
		{
	        l=z[i+1]-z[i]; //计算相邻素数差
			if(l%2==0)//判断相邻素数相差是否为偶数
				m++;//统计个数
	    }
	cout<<m;//输出符合的个数
	return 0;
}
