#include<iostream>
using namespace std;
int main()
{
int N,M,x;
cin>>N>>M;
int	a[100],b[100],i,j,sum=0;
for(i=0;i<M;i++)
	cin>>a[i];
for(i=0;i<M;i++)
	cin>>b[i];
for(i=0;i<N;i++)
   {for(j=0;j<M;j++)
    {cin>>x;
     if(x==b[j])
	 sum=sum+a[j];
	}
   cout<<sum<<endl;
   sum=0;
   }
return 0;
}
