#include "stdafx.h"
#include<iostream>
#include<cmath>
using  namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	int  a,b,i,j=0,k,n;
	cin>>n>>a>>b;//输入你的能力值（甲）、X、Y
	i=n/10+n%10*10;//计算乙的值
	j=sqrt(float (i-n)*(i-n))/a;//计算第一种情况的丙
	k=i/b;//计算第二种情况的丙
	cout<<n<<" ";//输出甲的能力值
	if(j!=k)//两种情况丙的值不等（有解）
		cout<<"No Solution";
	else//当两种情况丙的值相等时（无解）
		{ cout<<"Ping"<<" ";//输出甲和自己相等能力的输出结果
	      if(i>n)
			  cout<<"Cong"<<" ";//输出乙和自己大于能力的输出结果
		  if(i<n)
			   cout<<"Gai"<<" ";//输出乙和自己小于能力的输出结果
		  if(i==n)
			   cout<<"Ping"<<" ";//输出乙和自己相等能力的输出结果
		  if(j>n)
			  cout<<"Cong"<<" ";//输出丙和自己大于能力的输出结果
		  if(j<n)
			   cout<<"Gai"<<" ";//输出丙和自己小于能力的输出结果
		  if(j==n)
			   cout<<"Ping"<<" ";//输出丙和自己相等能力的输出结果
	  }
	return 0;
}
