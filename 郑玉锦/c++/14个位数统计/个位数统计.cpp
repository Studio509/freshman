#include <iostream>
using namespace std;
int main()
{
	int a;//定义一个整数
	int b;//记录的余数
	int x[10]={0,0,0,0,0,0,0,0,0,0};//用来记录每个数字的个数
	cin>>a;
	while(1)
	{
		b=a%10;//获取这个数字的每一位数字
		x[b]=x[b]+1;//将这个数字的每一位数字对应的个数加一
		a=a/10;
		if(a==0)
			break;
	}
	system("cls");
	int i;//循环用
	for(i=0;i<10;i++)//输出这个整数拥有的每个数字及其的个数
	{
		if(x[i]!=0)
			cout<<i<<":"<<x[i]<<endl;
	}
	return 0;
}
