#include <iostream>
using namespace std;
int main()
{int n,i=0;
cout<<"请输入一个小于1000的正整数：";
cin>>n;
while(n!=1)
{if(n%2==0)
{n=n/2;i++;}
else
{n=(3*n+1)/2;i++;}}
cout<<"砍了"<<i<<"次"<<endl;
return 0;

 



}