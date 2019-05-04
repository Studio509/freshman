#include <iostream>
using namespace std;
int main()
{int a,b,x,y=1,i;
 cin>>a>>b;
 x=a*b;
 for(i=0;x!=0;i++)
 {y=x%10;
  x=x/10;
  if(y!=0)
  cout<<y;
  else
	continue;
 }
 return 0;
}
