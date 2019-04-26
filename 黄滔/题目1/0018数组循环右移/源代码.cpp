#include<iostream>
using namespace std;
int main()
{   int A[100],B[100];
    int N;
	int M;
	int i,j;
	cin>>N>>M;
	if(M>N)//周期循环
	M=M%N;
	for(int i=0;i<N;i++)
		cin>>A[i];
	if(M!=0)
	{
		for(i=0;i<M;i++)
			B[i]=A[N-M+i];
		for(i=N-M;i>=0;i-=M)
		{   
			for(j=0;j<M;j++)
			 A[i+j]=A[i-M+j];
		}
		for(i=0;i<M;i++)
		  A[i]=B[i];
	}
  for(i=0;i<N;i++)
	  {
		cout<<A[i];
		if(i==N-1)
		break;
		cout<<" ";
	}
	return 0;
}
