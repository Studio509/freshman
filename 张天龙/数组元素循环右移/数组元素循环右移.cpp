#include <iostream>
using namespace std;
void main()
{
	int n,m,t,a[10],b[10];
	cout<<"请确定要输入几个数：\n";
	cin>>n;
	cout<<"请输入要右移几位：\n";
	cin>>m;
	cout<<"请输入数据";
	for(int i=0;i<n;i++)	
		cin>>a[i];
	for(int i=0,exchang=n;i<(n/2);i++,exchang--)
		b[exchang-m]=a[i];
	for(int i=0;i<n;i++)
		cout<<b[i];
}
