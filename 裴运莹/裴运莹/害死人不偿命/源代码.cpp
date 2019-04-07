
#include<iostream>
using namespace std;
int main()
{int n,a,i;
cin>>n;
a=n;
for(i=0;a!=1;i++)
 {if(a%2==0)
   a=a/2;
 else
   a=(3*a+1)/2;
 }
cout<<i;
return 0;
}
