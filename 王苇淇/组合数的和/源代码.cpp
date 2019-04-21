#include<iostream>
using namespace std;
int main()
{int n,i,x,sum=0;
 cin>>n;
 for(i=0;i<n;i++)
   {cin>>x;
    sum=sum+x;
   }
 cout<<sum*11*(n-1);
 return 0;
}
