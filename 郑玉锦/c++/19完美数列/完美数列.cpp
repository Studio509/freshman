#include <iostream>
using namespace std;
int main()
{
	int n;//输入整数的个数
	int p;//定义一个参数
	int a[999];
	cin>>n;
	cin>>p;
	int i;//循环用
	int min=999999;
	int max=0;
	int b;//用来记录p*max
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]<min)
		{
			min=a[i];
			b=p*min;
		}
		if(a[i]>max)
			max=a[i];
	}
	p=0;
	for(i=0;i<n;i++)
	{
		if(a[i]<=b)
			p=p+1;
	}
	system("cls");
	cout<<p<<endl;
	return 0;
}
