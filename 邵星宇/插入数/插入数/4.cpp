#include<iostream>
using namespace std;
int main()
{
  int n,i,j;
  int a[11]={10,20,30,40,50,60,70,80,90,100};
  for(i=0;i<10;i++)
	  cout<<a[i]<<' ';
      cout<<endl;
	  cout<<"ÇëÊäÈë²åÈëÊý\n";
	  cin>>n;
  if(n>=a[9])
  {
  a[10]=n;
  }
  else
  {
   for(int i=0;i<10;i++)
   if(n<=a[i])
    {
     for(int j=10;j>=i;j--)
     a[j+1]=a[j];
     a[i]=n;
     break;
    } 
  }
for(int i=0;i<11;i++)
cout<<a[i]<<' ';
return 0;
}