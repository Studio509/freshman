#include<iostream>
#include<string>
#include<stdlib.h>
#include<sstream>
using namespace std;
int CalcBit(int num)//计算num的位数
{
int cnt=0;
while(num/10!=0)
{
num=num/10;
cnt++;
}
cnt=cnt+1;
return cnt;
}
int main( )
{   
	string n,N,a;//a是存放和的每一位
	int x=0,X,m;//m：和的位数及a的长度
    cin>>n;
	for(int i=0;i<n.length();i++)
	{
		N=n[i];
	    X=atoi( N.c_str());	
		x=X+x;
	  }//求和
	    m=CalcBit(x);
		stringstream ss;
		ss<<x;
		ss>>a;
for(int i=0;i<m;i++)
{ 
	  N="";
	  N=a[i];
switch(atoi(N.c_str()))
{
case 0:cout<<"ling";break;
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
if(i==m-1)
	break;
cout<<" ";
}
	return 0;
}
