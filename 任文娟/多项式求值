#include<iostream>
using namespace std;
double f(int n,double a[],double x)
{
  int i;
  double m=1.0,sum=a[0];
  for(i=1;i<=n;i++)
  {
    m=m*x;
    sum=sum+a[i]*m;
  }
  return sum;
}
int main()
{
  int n,i;
  double a[100],x,t;
  cin>>n;
  cin>>x;
  for(i=0;i<=n;i++)
     {
		 cin>>a[i];
     }
  t=f(n,a,x);
  cout<<t<<endl;
  return 0;
}
