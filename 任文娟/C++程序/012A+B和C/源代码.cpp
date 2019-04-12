#include<iostream>
using namespace std;
int main()
{
    int T,i;
    cin>>T;
    if(T>10)
      return 0;
    double A,B,C;
    for(i=1;i<=T;i++)
    {
       cin>>A>>B>>C;
       if(A+B>C)
         cout<<"Case #"<<i<<": true"<<endl;
       else
         cout<<"Case #"<<i<<": false"<<endl;
    }
   return 0;
}
