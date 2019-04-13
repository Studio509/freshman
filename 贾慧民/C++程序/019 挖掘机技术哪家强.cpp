#include "stdafx.h"
#include<iostream>
#include<string>
using  namespace std;
struct message
{
	int num;
	int score;
};
int _tmain(int argc, _TCHAR* argv[])
{ 
	message x[100];
	int n,i,j,k[100],l,m,max,o=1;
	cin>>n;//输入参加的人数
	for(i=0;i<100;i++)//对数组进行赋值
		k[i]=0;
	for(i=0;i<n;i++)
		cin>>x[i].num>>x[i].score;//输入学生的基本信息
    for(i=1;i<n+1;i++)//开始计算来自相同学校的成绩
		for(j=0;j<n;j++)
		  if(x[j].num==i)
			  for(l=i-1;l<i;l++)
			  k[l]=x[j].score+k[l];//结束计算来自相同学校的成绩
	   
		max=k[0];//开始找学校成绩最高的
		for(m=1;m<i;m++)
              if(max<k[m])
				{  max=k[m];
		          o=m+1;//结束找学校成绩最高的
		cout<<o<<" "<<max;//输出成绩最高的学校和分数
	return 0;
}
