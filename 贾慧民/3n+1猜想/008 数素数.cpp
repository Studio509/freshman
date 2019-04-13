#include "stdafx.h"
#include<iostream>
using namespace  std;
void  S(int a,int b);
int _tmain(int argc, _TCHAR* argv[])
{
	int  m  ,n;
	cin>>m>>n;
	S(m,n);
	return 0;
}
void  S(int a,int b)
{
	int x,i,j,k=0,z[1000];
	for(i=3;i<1000;i++)
		for(j=2;j<i;j++)
			{if(i%j==0)break;
				if(j==i-1)
				{	k++;
	              for(x=k;x<k+1;x++)
                   z[x]=i;
				}}
	z[0]=2;
	for(i=a-1;i<b;i++)
	{	cout<<z[i]<<" ";
       if((i-(a+8))%10==0)
		   cout<<endl;
	}

}
