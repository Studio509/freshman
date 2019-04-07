#include<iostream>
using namespace std;
void main()
{
	int a[20],b[20],c,i,j=0;
	cout<<"请输入元素的个数"<<endl;
	cin>>c;
	cout<<"请输入元素"<<endl;
	for(i=0;i<c;i++)
		cin>>a[i];
	cout<<"原序为";
	for(i=0;i<c;i++)
		cout<<a[i]<<" ";
	for(i=c-1;i>=0;i--)	
		{
			b[j]=a[i];
			j++;
	   }
	cout<<"逆序为";
	for(j=0;j<c;j++)
		 cout<<b[j]<<" ";
}
