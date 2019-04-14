#include<iostream>
#include <string>
using namespace std;
string s;
const int maxn = 10;
int a[maxn];
void f(int n)				
{
	int x = s[n] - '0';		
	a[x]++;
	if(n!= 0)			
		f(n-1);
}
int main()
{
	cin>>s;
	int len = s.size();
	f(len - 1);
	for(int i = 0;i <= 9;i++)
	{
		if(a[i] != 0)
		{
			cout << i << ":" << a[i] << endl;
		}
	}
	return 0;
}
