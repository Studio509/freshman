#include "stdafx.h"
#include<iostream>
using  namespace  std;
void  D(int x[]);
int _tmain(int argc, _TCHAR* argv[])
{
	int x[8],*p=x,i;
	for(i=0;i<8;i++)
	cin>>x[i];
	D(p);
	return 0;
}
void  D(int x[])
{
	int  y,i;
	for(y=1;y<9;y++)
	 {
		if(y%2==0)
		  if(y!=0)
	        x[y-1]=x[y-1]-1;
	    if(y%2!=0)
			x[y-1]=x[y-1]*x[y];
	}
	for(i=0;i<8;i++)
	   cout<<x[i]<<" ";
}
