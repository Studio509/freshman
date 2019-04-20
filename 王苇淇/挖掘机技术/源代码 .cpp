#include<iostream>
using namespace std;
int main()
{	
	int school[100001]={0};	
	int N,i,num, 
	score,max=1;
	cin>>N;	
	for(i=0;i<N;i++)
	{	
		cin>>num>>score;	
		school[num]+=score;
	}	
	for(i=0;i<=N;i++)
	{		
		if(school[max]<school[i])
			max=i;
	}	
	cout<<max<<" "<<school[max];
}
