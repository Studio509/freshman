#include "stdafx.h"
#include<iostream>
#include<iomanip>
using  namespace  std;
void  A1(int n,int x[]);
void  A2(int n,int x[]);
void  A3(int n,int x[]);
void  A4(int n,int x[]);
void  A5(int n,int x[]);
int _tmain(int argc, _TCHAR* argv[])
{
	int i,n,x[100],*p=x;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>x[i];
	 A1(n,p);cout<<" ";
     A2(n,p); cout<<" ";
	 A3(n,p); cout<<" ";
	 A4(n,p); cout<<" ";
	 A5(n,p);
	return 0;
}
void  A1(int n,int x[])
{
	int i,j=0,k,m=0,y[100];
	for(i=0;i<n;i++)
	  {  
		  if(x[i]%5==0&&x[i]%2==0)
		{	j++;
	       for(k=j-1;k<j;k++)
			y[k]=x[i];
		  }}
	for(i=0;i<j;i++)
		m=m+y[i];
	if(m==0)
		cout<<"N";
	else
	    cout<<m;
}
void  A2(int n,int x[])
{
	int i,j=0,k,m=0,y[100];
	for(i=0;i<n;i++)
	  {  
		  if(x[i]%5==1)
		 {	j++;
	        for(k=j-1;k<j;k++)
			  y[k]=x[i];
		  }
	  }
	for(i=0;i<j;i++)
		if(i%2!=0)
			y[i]=y[i]*(-1);
	for(i=0;i<j;i++)
		m=m+y[i];
	if(m==0)
		cout<<"N";
	else
	    cout<<m;
}
void  A3(int n,int x[])
{
	int i,j=0,y[100];
	for(i=0;i<n;i++)  
		  if(x[i]%5==2)
	      	j++;
    if(j==0)
		cout<<"N";
	else
	    cout<<j;
}
void  A4(int n,int x[])
{
	int i,j=0,k,y[100];
	double  m=0;
	for(i=0;i<n;i++)
	  {  
		  if(x[i]%5==3)
		{	j++;
	      for(k=j-1;k<j;k++)
			y[k]=x[i];
		  }}
	for(i=0;i<j;i++)
		m=m+y[i];
	if(m==0)
		cout<<"N";
	else
	    cout<<setprecision(3)<<m/j;
}
void  A5(int n,int x[])
{
	int i,j=0,max=0,k,y[100];
	for(i=0;i<n;i++)
	  {  
		  if(x[i]%5==4)
		{	j++;
	      for(k=j-1;k<j;k++)
			y[k]=x[i];
		  }
	 }
	max=y[0];
	for(i=1;i<j;i++)
		if(max<y[i])
			max=y[i];
	if(max==0)
		cout<<"N";
	else
	    cout<<max;
}
