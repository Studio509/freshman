#include <iostream>   
#include <string>
using namespace std;
int main(void)
{  
	string s[]={
		"Your password is wan mei.",
		"Your password is tai duan le.",
		"Your password is tai luan le.",
		"Your password needs shu zi.",
		"Your password needs zi mu."
	};
	int n; cin>>n; 
	getchar(); 
	for(int i=0;i<n;++i)
	{
		string t; getline(cin,t);
		int x=0,c=0,d=0,num=0; 
		for(int j=0;j<t.size();++j)
		{
			if((t[j]>='A'&&t[j]<='Z')||(t[j]>='a'&&t[j]<='z'))
			{
				++c;
			}
			else if(t[j]>='0'&&t[j]<='9')
			{
				++num;
			}
			else if(t[j]=='.')
			{
				++d;
			}
		}
		int sum = c+num+d;
		if(t.size()<6)
		{
			x = 1;
		}
		else
		{
			if(sum<t.size())
			{
				x = 2;
			}
			else
			{
				if(num==0)
				{
					x = 3;
				}
				else if(c==0)
				{
					x = 4;
				}
			}
		}
		cout<<s[x]<<endl;
	}
	return 0;
}
