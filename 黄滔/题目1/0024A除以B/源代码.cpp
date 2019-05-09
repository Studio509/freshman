#include "stdafx.h"
#include<iostream>
using namespace std;
int main()
{   
    char A[1001],*p=A;;
    int B,i;
    cin>>A>>B;
	int a=0,b=0;
   for(i=0;A[i];i++)//****当A[i]='/0'时，fase结束循环
	{    
		a=b*10+(A[i]-'0');//模拟手算除法
        A[i]=a/B+'0';//
        b=a%B;//余数
   }
   B=b;
     if(A[0]=='0'&&A[1]!='\0')//A[0]帮助去掉第一个0A[1]防止只有0的情况留下最后一个0
		   p++;//*****
        cout<<p<<" "<<B;//输出的是指针
	return 0;
}
