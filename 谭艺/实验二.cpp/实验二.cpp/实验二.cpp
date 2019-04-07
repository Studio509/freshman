#include<iostream>
using namespace std;
void zh(int i);
void main()
{cout<<"请输入一个三位数n:";
 int n,g,s,b,m,t,result;cin>>n;
 g=n%10;
 s=n/10%10;
 b=n/100;
 result=g+s+b;
 t=result%10;
 m=result/10%10;
 zh(m);cout<<" ";
 zh(t);
}
void zh(int i)
{switch(i)
{case 0:cout<<"ling";break;
 case 1:cout<<"yi";break;
 case 2:cout<<"er";break;
case 3:cout<<"san";break;
case 4:cout<<"si";break;
case 5:cout<<"wu";break;
case 6:cout<<"liu";break;
case 7:cout<<"qi";break;
case 8:cout<<"ba";break;
case 9:cout<<"jiu";break;
}
}