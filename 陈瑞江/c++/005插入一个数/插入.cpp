#include<iostream>
using namespace std;
const int MAXSIZE=100;
void main()
{
	int n,x[MAXSIZE],realsize,i,t,j;
	cout<<"请输入整数的个数:" <<endl;
    cin>>realsize;
    if(realsize>MAXSIZE)
       cout<<"不能超过"<<MAXSIZE;
    else
		{cout<<"请从小到大输入"<<realsize<<"个数";
         for(i=0;i<realsize;i++)
    	    cin>>x[i];
	cout<<"再输入一个数n:";
		cin>>n;
		  for(i=0;i<realsize-1;i++)
	     {if(n>x[i]&&n<x[i+1])
		  {for(j=realsize-1;j>=i+1;j--)
		x[j+1]=x[j];
		  x[i+1]=n;}
		 if(n<x[0])
		  {for(j=realsize-1;j>=0;j--)
		x[j+1]=x[j];
		 x[0]=n;}
		 if(n>x[realsize-1])
			 x[realsize]=n;}
		  cout<<"新数组为：";
	for(i=0;i<=realsize;i++)
		cout<<x[i]<<" ";}
}
