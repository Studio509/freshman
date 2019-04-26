#include<iostream>
#include<string>
using namespace std;
int main()
{   int Dnu=0;//对编号
    int num=0;//队员编号
	int a[1001]={0};//各队分数数组
	int maxs=0,maxnum=0;//队伍最大分数和最大队伍
    int score;//队员的分数
	int N,i;
	cin>>N;
	for(i=0;i<N;i++)
	{
		scanf("%d-%d %d",&Dnu,&num,&score);//scanf的使用方法，引用
		a[Dnu]+=score;//对score累加赋值给队编号为下标数组
		if(a[Dnu]>maxs)//找到最大值
		{
			maxnum=Dnu;
			maxs=a[Dnu];
		}
	}
	cout<<maxnum<<" "<<maxs;
	return 0;
}
