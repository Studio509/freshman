#include<iostream>
using namespace std;
const int x=1000;
int main()
{
	char name[x][100];
	char id[x][100];
	int score[x];
	int n,i,m,max=-1,min=101;
	cin>>n;
	for(i=0;i<n;i++)
	   cin>>name[i]>>id[i]>>score[i];
	for(i=0;i<n;i++)
	{
		if(max<score[i])
			max=score[i];
	}
	for(i=0;i<n;i++)
	{
		if(score[i]==max)
			m=i;
	}
	cout<<name[m]<<" "<<id[m]<<endl;
	for(i=0;i<n;i++)
	{
		if(min>score[i])
			min=score[i];
	}
	for(i=0;i<n;i++)
	{
		if(score[i]==min)
			m=i;
	}
	cout<<name[m]<<" "<<id[m];
	return 0;
}