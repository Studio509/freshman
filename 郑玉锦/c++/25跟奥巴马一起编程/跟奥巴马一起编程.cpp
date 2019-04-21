#include <iostream>
using namespace std;
int main()
{
	int a;//正方形的边长
	char b;//组成正方形的符号
	cin>>a>>b;
	int i;//循环用
	int j;//循环用
	system("cls");
	for(i=0;i<a/2;i++)
	{
		if(i==0||i==a/2-1)//输出第一行和最后一行的图形
		{
			for(j=0;j<a;j++)
				cout<<b;
			cout<<endl;
		}
		else
		{
			cout<<b;//输出除了第一行和最后一行以外的行的图形
			for(j=0;j<a-2;j++)
				cout<<" ";
			cout<<b<<endl;
		}
	}
	return 0;
}
