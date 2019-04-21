#include "stdafx.h"
#include<iostream>
using  namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	int  i,j,k,l=0,m=0,N,o,p,q,x[100],y[100],max;
	cin>>N;//输入骑行天数
	for(i=0;i<N;i++)
		cin>>x[i];//输入每天骑行英里
	for(i=1;i<N+1;i++)
		{for(j=0;j<N;j++)
			if(x[j]>=i)//判断每天骑行英里是否大于骑行天数
				l++;//统计每天骑行英里大于骑行天数的个数
	         if(l>=i)//判断每天骑行英里大于骑行天数的个数是否大于骑行天数
		      {   m++;//统计每天骑行英里大于骑行天数的个数大于骑行天数的个数
	              for(o=m-1;o<m;o++)
			     y[o]=i;}//将符合条件的放到一个数组中
			 l=0;
		      }
		max=y[0];//开始找符合条件中最大的
		for(i=1;i<m;i++)
			if(max<y[i])
				max=y[i];//结束找符合条件中最大的
		cout<<max;//输出符合条件中最大
	return 0;
}
