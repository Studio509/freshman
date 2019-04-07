#include<iostream>
using namespace std;
int main()
{
	int N,z,a,b,o,p,m,n;
    m=0;
    n=0;
    cin>>N;
    for(z=1;z<=N;z++)
 {
	 cin>>a;
     cin>>o;
     cin>>b;
     cin>>p;
  if(o==(a+b))
     n=n+1;    
  if(p==(a+b))
 	  m=m+1;
  if(o==p)
	  {
		  m=m-1;
          n=n-1;
      }
 }
   cout<<m<<" "<<n;
   return 0;
}
