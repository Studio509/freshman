#include "stdafx.h"
#include<iostream>
#include<string>	
using  namespace std;
struct student
{
	string  num;
	int     d;
	int     c;
	int     z;
};
int _tmain(int argc, _TCHAR* argv[])
{
	 student  y[100],x[100];
	int  n,L,H,i,j,l=0,a=0,b;
	string  e;
	cin>>n>>L>>H;
	for(i=0;i<n;i++)
		cin>>x[i].num>>x[i].d>>x[i].c;
	for(i=0;i<n;i++)
		if(x[i].d>=L&&x[i].c>=L)
           a++;
	cout<<a<<endl;
	for(i=0;i<n;i++)
		if(x[i].d>=H&&x[i].c>=H)
			{
			   l++;
	           for(j=l-1;j<l;j++)
				{   y[j].z=x[i].c+x[i].d;
			       y[j].num=x[i].num;
                   y[j].d=x[i].d;
			       y[j].c=x[i].c;
			   }}
	for(i=1;i<l;i++)
		for(j=l-1;j>i-1;j--)
			if(y[j].z>y[j-1].z)
			{ 
			  e=y[j-1].num;y[j-1].num=y[j].num;y[j].num=e;
	          a=y[j-1].d;y[j-1].d=y[j].d;y[j].d=a;
			  b=y[j-1].c;y[j-1].c=y[j].c;y[j].c=b;
	         }
	for(i=0;i<l;i++)
		cout<<y[i].num<<" "<<y[i].d<<" "<<y[i].c<<endl;
	l=0;
	for(i=0;i<n;i++)
		if(x[i].d>=H&&x[i].c<H&&x[i].c>=L)
			{
			   l++;
	           for(j=l-1;j<l;j++)
				{   y[j].z=x[i].c+x[i].d;
			       y[j].num=x[i].num;
                   y[j].d=x[i].d;
			       y[j].c=x[i].c;
			   }}
	for(i=1;i<l;i++)
		for(j=l-1;j>i-1;j--)
			if(y[j].z>y[j-1].z)
			{ 
			  e=y[j-1].num;y[j-1].num=y[j].num;y[j].num=e;
	          a=y[j-1].d;y[j-1].d=y[j].d;y[j].d=a;
			  b=y[j-1].c;y[j-1].c=y[j].c;y[j].c=b;
	         }
	for(i=0;i<l;i++)
		cout<<y[i].num<<" "<<y[i].d<<" "<<y[i].c<<endl;
	l=0;
	for(i=0;i<n;i++)
		if(x[i].d<H&&x[i].c<H&&x[i].d>x[i].c&&x[i].d>=L&&x[i].c>=L)
			{
			   l++;
	           for(j=l-1;j<l;j++)
				{   y[j].z=x[i].c+x[i].d;
			       y[j].num=x[i].num;
                   y[j].d=x[i].d;
			       y[j].c=x[i].c;
			   }}
	for(i=1;i<l;i++)
		for(j=l-1;j>i-1;j--)
			if(y[j].z>y[j-1].z)
			{ 
			  e=y[j-1].num;y[j-1].num=y[j].num;y[j].num=e;
	          a=y[j-1].d;y[j-1].d=y[j].d;y[j].d=a;
			  b=y[j-1].c;y[j-1].c=y[j].c;y[j].c=b;
	         }
	for(i=0;i<l;i++)
		cout<<y[i].num<<" "<<y[i].d<<" "<<y[i].c<<endl;
	l=0;
	for(i=0;i<n;i++)
		if(x[i].d<H&&x[i].c<H&&x[i].d<x[i].c&&x[i].d>=L&&x[i].c>=L)
			{
			   l++;
	           for(j=l-1;j<l;j++)
				{   y[j].z=x[i].c+x[i].d;
			       y[j].num=x[i].num;
                   y[j].d=x[i].d;
			       y[j].c=x[i].c;
			   }}
	for(i=1;i<l;i++)
		for(j=l-1;j>i-1;j--)
			if(y[j].z>y[j-1].z)
			{ 
			  e=y[j-1].num;y[j-1].num=y[j].num;y[j].num=e;
	          a=y[j-1].d;y[j-1].d=y[j].d;y[j].d=a;
			  b=y[j-1].c;y[j-1].c=y[j].c;y[j].c=b;
	         }
	for(i=0;i<l;i++)
		cout<<y[i].num<<" "<<y[i].d<<" "<<y[i].c<<endl;
	return 0;
}
