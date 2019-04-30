#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;

bool deal(int n)
{
	for(int i = 2; i * i <= n; i++ )
	{
		if(n % i == 0)
			return false;
	}
	return true;
}

int main()
{
	int n;
	cin>>n;
	vector<int> a;
	for(int i = 2; i <= n; i++ )
	{
		if(deal(i))
			a.push_back(i);
			
	}
	int time = 0;
	for(int i = 1; i < a.size(); i++ )
	{
		if((a[i]-a[i-1]) == 2)
			time++;
	}
	cout<<time;
	system("pause");
	return 0;
}