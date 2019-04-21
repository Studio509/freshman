#include<iostream>
using namespace std;
int main()
{
   int g1,s1,k1,g2,s2,k2,p,a,sk,g,s,k;
   cin>>g1>>s1>>k1>>g2>>s2>>k2;
   p=k1+s1*29+g1*17*29;
   a=k2+s2*29+g2*17*29;
   sk=a-p;
   if(sk<0)
   {
    sk=-sk;
    g=sk/(17*29);
    s=(sk-g*17*29)/29;
    k=sk-g*17*29-s*29;
    cout<<-g<<"."<<s<<"."<<k<<endl;
   }
   else
   {
    g=sk/(17*29);
    s=(sk-g*17*29)/29;
    k=sk-g*17*29-s*29;
    cout<<g<<"."<<s<<"."<<k<<endl; 
   }
   return 0;
}
