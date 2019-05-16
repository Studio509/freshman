#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int ab;
	int c;
	char ac;
	cin>>ab>>ac;
	if(ab/2==0)
		c=ab+1;
	else
	c=ab;
	for(int i=0;i<c;i++)
	cout<<ac;
	cout<<endl;
	for(int i=0;i<c/2-2;i++)
		cout<<ac<<setw(ab-1)<<ac<<endl;
	for(int i=0;i<ab;i++)
	cout<<ac;
	return 0;
}

