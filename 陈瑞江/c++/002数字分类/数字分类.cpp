#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
int a,c=0,d=0,m=0,n=0,x[100],y=0,z=0,i,j=1;double b;
cout<<"请输入整数个数：";
cin>>a;
for(i=1;i<=a;i++)
	cin>>x[i];
for(i=1;i<=a;i++)
if(x[i]%5==0&&x[i]%2==0) //能被5 整除的数中所有偶数的和
	m=x[i]+m;
cout<<m<<" ";
for(i=1;i<=a;i++)
if(x[i]%5==1)// 被5整除余1
	{if(j%2==1)
		d=d+x[i];
	else
		d=d-x[i];
j=j+1;}
cout<<d<<" ";
for(i=1;i<=a;i++)
if(x[i]%5==2) //被5 整除余2的个数
	n=n+1;
cout<<n<<" ";
for(i=1;i<=a;i++) //被5整除余3的数的平均数
	if(x[i]%5==3)
		{y=y+x[i];z=z+1;}
	b=y/z;
	cout<<fixed<<setprecision(1)<<b<<" ";
	for(i=1;i<=a;i++)  //被5整除余4的数的最大数
		if(x[i]%5==4)
			if(x[i]>c)
				c=x[i];
	cout<<c;
return 0;
}
