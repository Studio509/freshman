#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{   int n,i,j=0,flag1=1,j1=0,flag2=0,flag3=0,k1=0,k2=0,k3=0,k4=0,k5=0;
    int a[1000];
	float m;
    cin>>n;
	for(i=0;i<n;i++)
		{
			cin>>a[i];
	     if(a[i]%5==0&&a[i]%2==0)
		     k1=k1+a[i];
	    if(a[i]%5==1)
		{  
			k2=k2+a[i]*flag1;
			flag1=-1*flag1;
			j=1;
		}
	   if(a[i]%5==2)
           k3++;
	   	if(a[i]%5==3)
		{
			k4=k4+a[i];j1++;flag2=1;
		}
		if(a[i]%5==4)
		{
			if(k5<a[i])
		      k5=a[i];
			  flag3=1;
		}
	}
	if(k1==0)
		cout<<"N ";
	else
	cout<<k1<<" ";
	if(j==1)
	cout<<k2<<" ";
	if(j==0)
	cout<<"N ";
	if(k3!=0)
		cout<<k3<<" ";
	if(k3==0)
		cout<<"N ";
		if(flag2==1)
		{
			float K=k4,J=j1;
		    m=K/J;
		    cout<<setiosflags(ios::fixed)<<setprecision(1)<<m<<" ";
		}
		if(flag2==0)
		cout<<"N ";
		if(flag3!=0)
		cout<<k5;
		if(flag3==0)
			cout<<"N";
	return 0;
}
