#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	string N,a="0123456789";
	int n[10]={0,0,0,0,0,0,0,0,0,0};
	int i,j;
	cin>>N;
	for(i=0;i<N.length();i++)
		{
			for(j=0;j<10;j++)
		   {
			if(N[i]==a[j])
				n[j]++;
	       }
	}
	for(j=0;j<10;j++)
	{   if(n[j]==0)
	     continue;
		cout<<j<<":"<<n[j]<<endl;
	}
	return 0;
}
