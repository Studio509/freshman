#include <iostream>
using namespace std;
int main()
{
	int n;//定义总人数
	int m;//定义总题数
	int i;//循环用
	int a[100];//每道题的分数
	bool b[100];//每道题的正确答案
	int j;//循环用
	int c[100][100];//每个人的正确成绩
	int d[100];//记录每个人的成绩
	cin>>n;
	cin>>m;
	for(i=0;i<100;i++)//初始化d[100];
	{
		d[i]=0;
	}
	for(i=0;i<m;i++)//输入每道题的分数
	{
		cin>>a[i];
	}
	for(i=0;i<m;i++)//输入每道题的正确答案
	{
		cin>>b[i];
	}
	for(i=0;i<n;i++)//输入每个人的成绩
	{
		for(j=0;j<m;j++)
		{
			cin>>c[i][j];
			if(c[i][j]==b[j])//判断其答案是否正确
			{
				d[i]=d[i]+a[j];
			}
		}
	}
	system("cls");
	for(i=0;i<n;i++)//输出每个人的成绩
	{
		cout<<d[i];
		cout<<endl;
	}
	return 0;
}
