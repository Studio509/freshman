#include<iostream>
using namespace std;
int main()
{
	int a[100],i,j,n,x;
	cout<<"����������Ԫ�صĸ�����";
	cin>>n;
	cout<<"���С���������������Ԫ�أ�";
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"������Ҫ���������";
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
	cout<<"����������Ϊ��";
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}