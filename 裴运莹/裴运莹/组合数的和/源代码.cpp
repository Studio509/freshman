#include<iostream>
using namespace std;
int main()
{int n,a,b,c,sum=0;
 cin>>n;
 cin>>a>>b>>c;
 sum=sum+(a*10+b*1)+(a*10+c*1)+(b*10+a*1)+(b*10+c*1)+(c*10+a*1)+(c*10+b*1);
 cout<<sum;
}
