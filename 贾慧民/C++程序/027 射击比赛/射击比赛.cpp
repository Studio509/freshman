#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
struct people
{
	string num;
	int    x;
	int    y;
};
int _tmain(int argc, _TCHAR* argv[])
{
	people p[100];
	string max1,min1;
	int i,j,n,x[100],max,min;
	cin>>n;//输入射击人数
	for(i=0;i<n;i++)
		cin>>p[i].num>>p[i].x>>p[i].y;//输入射击人员的编号、x轴方向长度、y轴方向长度
	for(i=0;i<n;i++)
		x[i]=p[i].x*p[i].x+p[i].y*p[i].y;//将距中心距离的平方（x、y轴的长度各自平方加起来）放到一个数组中
	max=x[0];max1=p[0].num;//开始找距中心距离的平方最大的（离中心最远成绩越差）
	for(i=1;i<n;i++)
		if(max<x[i])
		{
			max=x[i];//将距中心距离的平方最大的给了max
			max1=p[i].num;//将距中心距离的平方最大的人员编号给了max1（成绩最差的人员编号）
		}//结束找距中心距离的平方最大的（离中心最远成绩越差）
    min=x[0];min1=p[0].num;//开始找距中心距离的平方最小的（离中心最近成绩越好）
	for(i=1;i<n;i++)
		if(max>x[i])
		{
			min=x[i];//将距中心距离的平方最小的给了min
			min1=p[i].num;//将距中心距离的平方最小的人员编号给了max1（成绩最好的人员编号）
		}//结束找距中心距离的平方最小的（离中心最近成绩越好）
		cout<<min1<<" "<<max1;//输出成绩最好的人员编号、成绩最差的人员编号
	return 0;
}
