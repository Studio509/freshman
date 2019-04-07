#include<iostream>
#include<iomanip>
using namespace std;
void main()
{
  int a,b,c;
  cout<<"20以内（包括20）的勾股数：\n";
  for(a=1;a<=20;a++)
   for(b=a;b<=20;b++)
    for(c=b;c<a+b&&c<=20;c++)
     {
      if(((a+b)<=c)||((a+c)<=b)||((b+c)<=a))
      break;
      if((a*a==(b*b+c*c))||((a*a+b*b)==c*c)||(b*b==(a*a+c*c)))
      cout<<setw(3)<<a<<setw(3)<<b<<setw(3)<<c<<"  "<<setw(3)<<a*a<<"+"<<setw(3)<<b*b<<"="<<setw(3)<<c*c<<endl;
     }
}
