#include <iostream>
#include <string>
using namespace std;
struct student//定义一个学生类
{
	string a;//学生的准考证号
	int d_score;//学生的德分
	int c_score;//学生的才分
};
int main()
{
	int n;//记录学生的总数
	int m;//所有达线的人数
	int l;//最低录取分
	int h;//优先录取分
	int i;//循环用
	int k;//循环用
	student s[100];//定义一个学生类数组
	int x1=0;student y[4][100];//记录才德全尽的学生
	int x2=0;student y2[100];//记录德胜才的学生
	int x3=0;student y3[100];//记录才德皆忘但尚有“德胜才”的学生
	int x4=0;student y4[100];//记录其他才德达线的学生
	student st;//之后按分数排序时用
	cin>>n;
	cin>>l;
	cin>>h;
	for(i=0;i<n;i++)
		cin>>s[i].a>>s[i].d_score>>s[i].c_score;
	for(i=0;i<n;i++)//开始记录各类学生
	{
		if(s[i].c_score>=h&&s[i].d_score>=h)
		{
			y[0][x1]=s[i];
			x1=x1+1;
		}
		else if(s[i].d_score>=h&&s[i].c_score>=l&&s[i].c_score<h)
		{
			y[1][x2]=s[i];
			x2=x2+1;
		}
		else if(s[i].d_score<h&&s[i].d_score>=l&&s[i].c_score>=l&&s[i].c_score<h&&s[i].d_score>s[i].c_score)
		{
			y[2][x3]=s[i];
			x3=x3+1;
		}
		else if(s[i].c_score>=l&&s[i].d_score>=l)
		{
			y[3][x4]=s[i];
			x4=x4+1;
		}
	}
	m=x1+x2+x3+x4;//计算总达线人数
	int j;
	for(j=0;j<4;j++)
	{
		int b;//确定每一类学生输几次
		if(j==0)
			b=x1;
		else if(j==1)
			b=x2;
		else if(j==2)
			b=x3;
		else if(j==3)
			b=x4;
	for(k=1;k<b;k++)
	{
		for(i=0;i<b-k;i++)//给各类学生排序
		{
		if((y[j][i].c_score+y[j][i].d_score)<(y[j][i+1].c_score+y[j][i+1].d_score))//根据德分和才分之和排序
		{
			st=y[j][i];
			y[j][i]=y[j][i+1];
			y[j][i+1]=st;
		}
		else if(y[j][i].c_score+y[j][i].d_score==y[j][i+1].c_score+y[j][i+1].d_score)//若德分和才分之和相同
		{
			if(y[j][i].d_score<y[j][i+1].d_score)//则根据德分排序
			{
				st=y[j][i];
				y[j][i]=y[j][i+1];
				y[j][i+1]=st;
			}
			else if(y[j][i].d_score==y[j][i+1].d_score)//若德分也相同
			{
				if(s[i].a>s[i+1].a)//则根据学号排序
				{
					   st=y[j][i];
				       y[j][i]=y[j][i+1];
				       y[j][i+1]=st;
				}
			}
		}
	}
	}
	}
	system("cls");
	cout<<m<<endl;//输出总达线人数
	for(j=0;j<4;j++)//输出各类学生
	{
		int b;//确定每一类学生输几次
		if(j==0)
			b=x1;
		if(j==1)
			b=x2;
		if(j==2)
			b=x3;
		if(j==3)
			b=x4;
		for(i=0;i<b;i++)//输出每一类学生
			cout<<y[j][i].a<<" "<<y[j][i].d_score<<" "<<y[j][i].c_score<<endl;
	}
	return 0;
}
