#include<iostream>
using namespace std;
void main()
{
	int a[10],i,max,min;
	float sum;
	cout<<"������10��������"<<endl;
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
	cout<<"��߷֣�"<<max<<endl;
	cout<<"��ͷ֣�"<<min<<endl;
	cout<<"ƽ����:"<<sum/10<<endl;
}