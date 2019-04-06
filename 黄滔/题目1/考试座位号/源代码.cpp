#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a[1000],b[1000];
	int i,j,N,M,tr_num[1000],text_num[1000],tr[1000],text[1000];
	cin>>N;
	for(i=0;i<N;i++)
	{
		cin>>a[i]>>tr_num[i]>>text_num[i];
	}
	cin>>M;
	for(i=0;i<M;i++)
	{
		cin>>tr[i];
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			if(tr_num[i]==tr[j])
			{b[j]=a[i];text[j]=text_num[i];}
		}
	}
    for(i=0;i<M;i++)
	{ 
	  cout<<b[i]<<" "<<text[i]<<endl;
	}
	return 0;
}
