#include<iostream>
using namespace std;
int main()
{
int i,num[10]={0};
char a[100];
cout<<"请输入小于100个的字符 ";
cin.getline(a,100);
for(i=0;i<strlen(a);i++)
{
if(a[i]>='0'&&a[i]<='9')
num[a[i]-'0']++;
}
for(i=0;i<10;i++)
cout<<i<<"数字个数为："<<num[i]<<'\t';
system("pause");
return 0;
}