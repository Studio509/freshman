#include<iostream>
using namespace std;
int main()
{
    int N,a[10],i,sum=0;
    cin>>N;
    for(i=0;i<N;i++)
      cin>>a[i];
    for(i=0;i<N;i++)
      sum=sum+(a[i]*10+a[i])*(N-1);
    cout<<sum<<endl;
    return 0;
}
