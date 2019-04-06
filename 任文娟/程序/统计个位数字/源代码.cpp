#include <iostream>
using namespace std;
int Count_Digit ( const int N, const int D )
{
  int n,j=0;
  if(N<0)
	  n=-N;
  else
	  n=N;
  while(n>0)
  {
	  if(n%10==D)
		 j++;
	  n=n/10;
  }
  return j;
}
int main()
{
  int n,d,t;
  cin>>n>>d;
  t=Count_Digit(n,d);
  cout<<t<<endl;
  return 0;
}
