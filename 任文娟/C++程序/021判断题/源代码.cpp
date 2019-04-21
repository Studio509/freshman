#include<iostream>
using namespace std;
int main()
{
  int N,M,i,a[100],b[100],j,x,sum=0,c[100];
  cin>>N>>M;
  for(i=0;i<M;i++)
  cin>>a[i];
  for(i=0;i<M;i++)
  cin>>b[i];
  for(i=0;i<N;i++)
  {
    for(j=0;j<M;j++)
     {
        cin>>x;
        if(x==b[j])
           sum+=a[j];
     }
    c[i]=sum;
    sum=0;
  }
  for(i=0;i<N;i++)
    cout<<c[i]<<endl;
  return 0;
}
