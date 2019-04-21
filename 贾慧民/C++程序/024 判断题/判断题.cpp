#include "stdafx.h"
#include<iostream>
using  namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	int a,b,d=0,i,j,k=0,l=0,x[100][100],sum=0;
	cin>>a>>b;//输入学生人数和判断题数量
	for(i=0;i<a+2;i++)
		for(j=0;j<b;j++)
			cin>>x[i][j];//输入判断题分值、判断题正确答案及学生答案
	for(i=2;i<a+2;i++)
	  {	for(j=0;j<b;j++)
			if(x[i][j]==x[1][j])//判断学生答案是否正确
			   sum=sum+x[0][j];//计算学生正确答案总分
	     cout<<sum<<endl;//输出学生总分
		 sum=0;l=0;
	   }
	return 0;
}
