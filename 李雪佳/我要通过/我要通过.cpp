#include<iostream>
#include<string>
using namespace std;
int main()
{
	string  x[10]; 
	int i,n;
	cout<<"请输入字符串的个数:";
	cin>>n;
	cout<<"请输入字符串:";
	for(i=0;i<n;i++)
	cin>>x[i];
	for(i=0;i<n;i++)
		if((x[i]=="PAT")||(x[i]=="XPATX")||(x[i]=="A"'A''P''A''T''A''A')||(x[i]=='P''A''A''T')||(x[i]=='A''A''P''A''A''T''A''A''A''A'))
           cout<<"yes";
		else 
			cout<<"no";
	return 0;
}
