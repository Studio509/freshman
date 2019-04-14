#include<iostream>
using namespace std;
#include<string>
int main()
{
    int a[10]={0},i;
    string str;
    cin>>str;
    for(i=0;i<str.length();i++)
    {
        a[str[i]-'0']++;
    }
	for (i=0; i<10;i++)
	{
		if (a[i])
		{
			cout<<i<<":"<<a[i]<<endl;
		}
	}
	return 0;
}
