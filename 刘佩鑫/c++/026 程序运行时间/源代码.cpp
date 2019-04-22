#include<iostream>
#include<math.h>
using namespace  std;
int main()
{
  int c1,c2;
  int h,m,s;
  cin>>c1>>c2;
  float c3;
  c3=(c2-c1*1.00)/100;    
  h=c3/3600;
  m=((c3-h*3600)/60);
  s=round(c3-h*3600-m*60);
  if(s==60){
    m++;
    s=0;
  }
  if(m==60){
    h++;
    m=0;
  }
  cout<<h<<m<<s;
  return 0;
}
