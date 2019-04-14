#include <iostream>
using namespace std;
int main()
{
	int a;//定义一个整数
	char b;//定义一个符号
	//int c;//记录剩下的符号的个数
	int i;//循环用
	int j=1;//循环用
	int k;//循环用
	cin>>a;
	cin>>b;
	int c;//用来记录已用的符号个数 a-1将符号给中间那一行留一个
    c=a-1;
	while(1)
	{
		if(c<2*(2*(j+1)-1))//判断余下的符号个数是否够继续排列
			break;
		else
		{
			c=c-2*(2*(j+1)-1);//用来计算一共可以成几行
			j=j+1;
		}
	}
	system("cls");
	for(i=1-j;i<=j-1;i++)
	{
		if(i<0)
		{
			for(k=0;k<j-(-1*i+1);k++)//每行输出最大行-其所在行个空格//，此时行数为负数，所以为最大行数加其行数
			    cout<<" ";
			for(k=0;k<2*(-1*i+1)-1;k++)//每行输出2*i-1个符号，此时行数为负数，所以行数需要乘-1
				cout<<b;
			for(k=0;k<j-(-1*i+1);k++)//每行输出最大行-其所在行个空格//，此时行数为负数，所以为最大行数加其行数
			    cout<<" ";
			cout<<endl;
		}
		if(i==0)
		{
			for(k=0;k<j-(i+1);k++)
				cout<<" ";
			for(k=0;k<2*(i+1)-1;k++)
				cout<<b;
			for(k=0;k<j-(i+1);k++)
				cout<<" ";
			cout<<endl;
		}
		if(i>0)
		{
			for(k=0;k<j-(i+1);k++)
				cout<<" ";
			for(k=0;k<2*(i+1)-1;k++)
				cout<<b;
			for(k=0;k<j-(i+1);k++)
				cout<<" ";
			cout<<endl;
		}
	}
	cout<<c;
	return 0;
}
