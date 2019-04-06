#include "stdafx.h"
#include<iostream>
#include<string>
using  namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	string str1,str2;
	int  n1,n2,a,b,i,j=0,k=0,l=0,m=0,n;
	cin>>str1>>n1>>str2>>n2;
	a=str1.length();b=str2.length();
	for(i=0;i<a;i++)
		if(str1[i]-48==n1)
			j++;
	for(i=0;i<b;i++)
		if(str2[i]-48==n2)
			k++;
	for(i=0;i<j;i++)
		  l=10*l+1;
	l=n1*l;
	for(i=0;i<k;i++)
		  m=10*m+1;
	m=n2*m;
	n=m+l;
	cout<<n;
	return 0;
}
