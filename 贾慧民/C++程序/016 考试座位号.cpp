#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
struct message
{
	string  num;
	int            s;
	int            k;
};
int _tmain(int argc, _TCHAR* argv[])
{
	message x[100];
	int  i,j,k,l,m,n,n1;
	cin>>n;//输入学生数据的个数
	for(i=0;i<n;i++)
		cin>>x[i].num>>x[i].s>>x[i].k;//输入学生的信息
	cin>>n1>>l>>m;//输入查询的个数及查询考试座位号的试机座位号
	for(i=0;i<n;i++)
		 if(x[i].s==l)
			cout<<x[i].num<<" "<<x[i].k<<endl;//输出与第一个试机座位号相同的的学生学号及考试座位号
	for(i=0;i<n;i++)
	      if(x[i].s==m)
			  cout<<x[i].num<<" "<<x[i].k<<endl;//输出与第二个试机座位号相同的的学生学号及考试座位号
	return 0;
}
