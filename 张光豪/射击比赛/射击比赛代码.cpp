#include<iostream>
#include<string>
using namespace std;
int main()
{
	int maxid=0,minid=0,N,x,y,max=0,min=20000,id;
	cin>>N;
	for(;N>0;N--)
	{
		cin>>id>>x>>y;
		if(max<x*x+y*y)
		{
			maxid=id;
		    max=x*x+y*y;
	    }
		if(min>x*x+y*y)
		{
			minid=id;
			min=x*x+y*y;
		}
	}
	cout<<minid<<" "<<maxid;
	return 0;
}