#include <iostream>
#include<string>
using namespace std;
int main()
{
int a,i,j;
string b;
cout<<"请输入行数：";
cin>>a;
cout<<"输入正方形字母:";
cin>>b;
for(i=1;i<=a/2;i++)
	{
		
		if(i==1||i==a/2)
		    for(j=1;j<=a;j++)
			    cout<<b;
	else
	{
		cout<<b;
        for(j=1;j<=a-2;j++)
	        cout<<" ";
        cout<<b;
   }
cout<<endl;
}
return 0;
}
