#include<iostream>
using namespace std;
int main()
{
	int a[100],i,j,n,x;
	cout<<"请输入数组元素的个数：";
	cin>>n;
	cout<<"请从小到大输入该组数的元素：";
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"请输入要插入的数：";
	cin>>x;
	if(x>a[n-1])
		 {a[n]=x;
	n=n+1;}
	else
	{for(i=0;i<=n;i++)
		{
			if(a[i]>x)
			{
				for(j=n;j>=i;j--)
				a[j+1]=a[j];
		
			break;}
			n++;
               }
	a[i]=x;}
	cout<<"插入后的数组为：";
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}