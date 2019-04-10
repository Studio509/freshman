#include <iostream>
using namespace std;
int main()
{
  int n,i=0;
  cin>>n;
  while(n!=1)
  {
     if(n%2==0)
        n=n/2;
     else
	n=(3*n+1)/2;
     i++;
  }
  cout<<"需要"<<i<<"步才能得到n=1"<<endl;
  return 0;
}
