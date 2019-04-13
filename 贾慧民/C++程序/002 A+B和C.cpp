#include "stdafx.h"
#include<iostream>
using  namespace  std;
int _tmain(int argc, _TCHAR* argv[])
{
	int  n,i,j,x[10][3];
	cin>>n;
	for(i=0;i<n;i++)
		for(j=0;j<3;j++)
		  cin>>x[i][j];
    for(i=0;i<n;i++)
			if(x[i][0]+x[i][1]>x[i][2])
				cout<<"Case #"<<i+1<<":"<<" true"<<endl;
			else 
				cout<<"Case #"<<i+1<<":"<<" false"<<endl;
	return 0;
}
