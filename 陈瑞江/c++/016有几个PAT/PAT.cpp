#include<iostream>
#include<string>
using namespace std;
int main()
{
	int b,i,j;
	int P=0,A=0,T=0;
	string a;
	cout<<"请输入PAT中的字母：";
	cin>>a;
	b=a.length();
	for(i=0;i<b;i++)
		if(a[i]=='P')
			P++;           //P的个数
		else if(a[i]=='A')
			A+=P;          //A的个数
		else
			T+=A;          //T的个数
		cout<<T%1000000007;
		return 0;
}
