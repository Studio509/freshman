#include<iostream>
using namespace std;
int main()
{int N,i,a,b,x,y,m,n;
 m=0;
 n=0;
 cin>>N;
 for(i=1;i<=N;i++)
 {cin>>a;
  cin>>x;
  cin>>b;
  cin>>y;
  if(x==(a+b))
     n=n+1;    
  if(y==(a+b))
 	  m=m+1;
  if(x==y)
	  {m=m-1;
       n=n-1;
      }
 }

cout<<m<<" "<<n;

 return 0;
}
