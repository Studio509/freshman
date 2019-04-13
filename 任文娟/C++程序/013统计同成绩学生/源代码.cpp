#include <iostream>
using namespace std;
int main()
{
	int N,i,score[100];
	int K,j,a[100000]={0};
	cin>>N;
	for(i=0;i<N;i++)
	{
		cin>>score[i];
		a[score[i]]++;
	}
	cin>>K;
	int k[100],t;
	for(j=0;j<K;j++)
	{
		cin>>k[j];
	}
	for(t=0;t<K-1;t++)
	{
		cout<<a[k[t]]<<" ";
	}
	cout<<a[k[K-1]]<<endl;
	return 0;
}
