#include<iostream>
using namespace std;
int main()
{   int  i,realsize,n=0;
    char str[1000];
    cout<<"请输入字符个数:";
	cin>>realsize;
	cout<<"请输入字符:";
	for(i=0;i<realsize;i++)
	cin>>str[i];
    for(i=0;i<realsize;i++)
    {if(str[i]>=48&&str[i]<=57)
		n++;
	}
        cout<<n;
	return 0;
}
