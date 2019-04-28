#include<iostream>
using namespace std;
int main()
{
	int a[100000],i;
	for(i=0;;i++)
	{
	  cin>>a[i];
	if(getchar()=='\n')
		break;
	}
	int b=i;
	for(i=0;i<=b;i+=2)
	{   if(a[i+1]==0)
	       a[i]=0;
	    else
	    {
		   a[i]=a[i]*a[i+1];
		   a[i+1]=a[i+1]-1;
	     }
	}
	for(i=0;i<b;i++)
	{
		if(a[i]==0)
	    continue;
	    cout<<a[i]<<" ";
	}
	
	cout<<a[b];
	return 0;
}
