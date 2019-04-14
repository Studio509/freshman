#include<iostream>
 #include<cstdio>
 #include<string>
 using namespace std;
 int main()
 {
char s[100];
cout<<"输入一个数：";
cin>>s;
int n=strlen(s),b[11];   //取这个数的长度
int sum=0,j,t;
for(int i=0;i<n;i++)
{
sum=sum+(s[i]-'0');
}
for(j=0;sum!=0;j++)
{
b[j]=sum%10;
sum=sum/10;}
for(t=j-1;t>=0;t--)
{
switch(b[t])
{
case 0:cout<<"ling ";break;
case 1:cout<<"yi ";break;
case 2:cout<<"er ";break;
case 3:cout<<"san ";break;
case 4:cout<<"si ";break;
case 5:cout<<"wu ";break;
case 6:cout<<"liu ";break;
case 7:cout<<"qi ";break;
case 8:cout<<"ba ";break;
case 9:cout<<"jiu ";break;
}   
}
return 0;
 } 
