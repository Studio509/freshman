#include<iostream>
using namespace std;
int main()
{int a[]={1,2,3,4};
 int N,i,j;
 char x,y;
 cin>>N;
 for(i=1;i<=N;i++)
 {for(j=1;j<=4;j++)
    cin>>x>>y;
 } 
 if(y =='T')
   cout<<a[x-'A'];
 
 return 0;
}
