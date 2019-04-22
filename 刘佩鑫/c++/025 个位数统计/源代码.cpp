include<iostream>
#include<string.h>
using namespace std;
int main()
{
  string str;
  cin>>str;
  int c0,c1,c2,c3,c4,c5,c6,c7,c8,c9;
  c0=c1=c2=c3=c4=c5=c6=c7=c8=c9=0;
  int n=str.length();
  for(int i=0;i<n;i++){
    if(str[i]=='0') c0++;
    if(str[i]=='1') c1++;
    if(str[i]=='2') c2++;
    if(str[i]=='3') c3++;
    if(str[i]=='4') c4++;
    if(str[i]=='5') c5++;
    if(str[i]=='6') c6++;
    if(str[i]=='7') c7++;
    if(str[i]=='8') c8++;
    if(str[i]=='9') c9++;
  }
  if (c0>0) 
  cout<<"0:"<<c0<<endl;
  if (c1>0) 
  cout<<"1:"<<c1<<endl;
  if (c2>0) 
  cout<<"2:"<<c2<<endl;
  if (c3>0) 
  cout<<"3:"<<c3<<endl;
  if (c4>0) 
  cout<<"4:"<<c4<<endl;
  if (c5>0) 
  cout<<"5:"<<c5<<endl;
  if (c6>0) 
  cout<<"6:"<<c6<<endl;
  if (c7>0) 
  cout<<"7:"<<c7<<endl;
  if (c8>0) 
  cout<<"8:"<<c8<<endl;
  if (c9>0) 
  cout<<"9:"<<c9<<endl;
  return 0;
}
