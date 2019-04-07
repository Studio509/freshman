#include<iostream>
using namespace std;
int main()
{
	int i,j,k,m;
	char a;
	cin>>i>>a;
	j=(i+1)/2;
	for(k=0;k<i;k++)
		cout<<a;
		cout<<endl;
	for(k=0;k<j-2;k++)
	{
		cout<<a;
		for(m=0;m<i-2;m++)
			cout<<" ";
		cout<<a<<endl;
	}
	for(k=0;k<i;k++)
		cout<<a;
	return 0;
}