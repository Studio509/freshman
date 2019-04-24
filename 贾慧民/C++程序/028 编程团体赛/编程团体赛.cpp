#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
struct  message
{
	int  D;
	int  Y;
	int  score;
	int  Z;
};
int _tmain(int argc, _TCHAR* argv[])
{
	message x[100];
	int  i,j,k[100]={0},l=0,n,max,max1,o=0;
	cin>>n;//输入参赛人员个数
	for(i=0;i<n;i++)
		cin>>x[i].D>>x[i].Y>>x[i].score;//输入参赛人员基本信息（队伍编号、队员编号、成绩）
	for(i=0;i<n;i++)
	x[i].Z=0;//给结构体总分Z赋值
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(x[i].D==x[j].D)//判断队伍编号是否相等（是否来自同一学校）
				x[i].Z=x[i].Z+x[j].score;//计算来自相同学校的总分
	max=x[0].Z;max1=x[0].D;//开始找总分最大值及总分最大的队伍编号
	for(i=1;i<n;i++)
		if(max<x[i].Z)
		{ max=x[i].Z;//将大的总分给了max
	      max1=x[i].D;//将大的总分的队伍编号给了max1
		}
	cout<<max1<<" "<<max;//输出总分最大的队伍编号和最大总分
	return 0;
}
