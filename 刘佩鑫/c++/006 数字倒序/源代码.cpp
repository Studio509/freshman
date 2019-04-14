#include<iostream>
using namespace std;
int main()
{
	int a[100],b,c[100],i,j=0;
	cout<<"请输入元素的个数"<<endl;
	cin>>b;
	cout<<"请输入元素"<<endl;
	for(i=0;i<b;i++)
		cin>>a[i];
	cout<<"原序为";
	for(i=0;i<b;i++)
		cout<<a[i]<<" ";
	for(i=b-1;i>=0;i--)	
		{
			c[j]=a[i];
			j++;
	                   }
	cout<<"逆序为";
	{
	   for(j=0;j<b;j++)
		   cout<<c[j]<<" ";
	}	
	return 0;
}
