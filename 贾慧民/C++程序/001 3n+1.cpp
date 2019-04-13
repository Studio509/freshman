#include "stdafx.h"
#include<iostream>
using  namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
  int i,j=0,num;
  cout<<"请输入一个数：";
  cin>>num;
  cout<<"从"<<num<<"变为1需要次数：";
  for(i=1;i>0;i++)
  {
	  if(num%2==0)
     {
		 num=num/2;
         j++; 
      }
    else if(num==1)  break;
      else 
       { 
		   num=(3*num+1)/2;
           j++;  
	}
  }
  cout<<j<<endl;
	return 0;
}
