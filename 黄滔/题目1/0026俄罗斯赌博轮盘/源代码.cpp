#include<iostream>
using namespace std;
int gcd(int a,int b)//求最大公约数
{	int c;
	c=(a>b)?b:a;
	while(a%c!=0||b%c!=0)
	{	
		c--;
	}
	return c;
}
int main()
{   
    int T,m[1000],n[1000],a[1000][105],i,j,o,x,y,c,k=0,b=0,d[1000][106],l,l1,l2;//一个实例,k表示两颗子弹的最大
	cin>>T;
	for(i=0;i<T;i++)//输入
	{
	cin>>m[i]>>n[i];
	for(j=0;j<n[i];j++)
		cin>>a[i][j];
	}
	for(i=0;i<T;i++)
	{
		b=0;k=0;
     for(j=n[i]-1;j>0;j--)//数组d[][]求每个距离
		d[i][j]=a[i][j]-a[i][j-1];
	 d[i][0]=m[i]-a[i][n[i]-1]+a[i][0];
    k=d[i][0];//k是最后一颗和第一颗的距离
	for(j=n[i]-1;j>0;j--)//b 求弹孔最大距离
	{
		if(b<(a[i][j]-a[i][j-1]))
		b=a[i][j]-a[i][j-1];
	}
	l1=n[i];l2=m[i];
    c=gcd(l1,l2);
    x=n[i]/c;y=m[i]/c;
	cout<<x<<"/"<<y<<endl;//第一枪
	b=(k>b)?k:b;
	for(o=2;o<=b;o++)//中间几枪
	{   
		x=0;y=m[i];
		for(j=0;j<n[i];j++)
		{
			if(d[i][j]>=o)
		     x++;//**
		}
		c=gcd(x,y);
		cout<<x/c<<"/"<<y/c<<endl;
	}
    for(o=0;o<m[i]-b;o++)//最后面不可能出现的事件
	cout<<"0"<<endl;
	}
	return 0;
}
