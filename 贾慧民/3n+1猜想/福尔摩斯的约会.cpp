#include "stdafx.h"
#include<iostream>
#include<string>
using  namespace  std;
int _tmain(int argc, _TCHAR* argv[])
{
	string str1,str2,str3,str4;
	char  x[100];
	int a,b,c,d,i,j,m=0,n,o;
	cin>>str1>>str2>>str3>>str4;
	a=str1.length();b=str2.length();
	c=str3.length();d=str4.length();
    for(i=0;i<a;i++)
		for(j=0;j<b;j++)
			if(str1[i]==str2[j])
			{	m++;
	        for(i=m-1;i<m;i++)
				x[i]=str2[j];}
	
	switch(x[0]-65)
	{case  0:cout<<"MON";break;
	 case  1:cout<<"TUE";break;
     case  2:cout<<"WED";break;
	 case  3:cout<<"THU";break;
     case  4:cout<<"FRI";break;
	 case  5:cout<<"SAT";break; 
	 case  6:cout<<"SUN";break;
	}
	n=x[1]-55;
	cout<<" "<<n<<":";

	for(i=0;i<c;i++)
		{for(j=0;j<d;j++)
		    if(str3[i]>=97&&str3[i]<=122)
			{ if(i==j&&str3[i]==str4[j])
	         {
				m=1;
				o=i;
				break;
			 }
			if(m==1)break;
			}}
	if(i<10)
		cout<<"0"<<i;
	else
		cout<<i;
	return 0;
}
