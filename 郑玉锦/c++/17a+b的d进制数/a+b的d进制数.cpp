#include <iostream>
using namespace std;
int main()
{
	int a;//先定义整数a
	int b;//再定义整数b
	int c;//记录a与b的和
	int d;//记录要将c转化为几进制
	int e[100];//用来记录c转化为d进制后的数
	int i=0;//循环用
	cin>>a>>b>>d;
	c=a+b;
	while(1)
	{
		e[i]=c%d;
		c=c/d;
		i=i+1;
		if(c==0)
			break;
	}
	for(d=i-1;d>=0;d--)
	{
		c=c*10+e[d];
	}
	system("cls");
	cout<<c<<endl;
	return 0;
}
