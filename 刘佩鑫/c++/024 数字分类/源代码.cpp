#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int A1=0,A2=0,A3=0,A5=0;
  double A4=0.0;
  int a;
  int k=1;
  int cntA2=0,cntA4=0;
  int N;
  cin >>N;
  while(N--)
  {
    cin>>a;
    if(a%10==0) 
      A1 +=a;
    else if (a%5==1) 
    {
      A2 = A2+k*a;
      k=-k;
      cntA2++;
    }
    else if(a%5==2)
		A3++;
    else if(a%5==3) 
    {
      A4 +=a;
      cntA4 =cntA4+1;
    }
    else if(a%5==4)
    {
      if(a>A5) A5=a;
    }
  }
  if(cntA4>0) A4=A4/cntA4;
  if (A1==0) cout<<"N"<<" ";
  else if (A1>0) cout<<A1<<" ";
  
  if (cntA2==0) cout<<"N"<<" ";
  else if (cntA2>0) cout<<A2<<" ";
  
  if (A3==0) cout<<"N"<<" ";
  else if (A3>0) cout<<A3<<" ";
  
  if (A4==0.0) cout<<"N"<<" ";
  else if (A4>0.0) 
	  cout<"N "<<A4;
  if (A5==0) cout<<"N";
  else if (A5>0) cout<<A5;
  return 0;
}
