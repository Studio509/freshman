#include<iostream>
using namespace std;
void main()
{
	int a[10],i,max,min;
	float sum;
	cout<<"请输入10个整数："<<endl;
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	max=a[0];
	min=a[0];
	sum=0;
	for(i=0;i<10;i++)
	{
		if(max<a[i])
	    max=a[i];
		if(min>a[i])
		min=a[i];
		sum=sum+a[i];
	}
	cout<<"最高分："<<max<<endl;
	cout<<"最低分："<<min<<endl;
	cout<<"平均分:"<<sum/10<<endl;
}