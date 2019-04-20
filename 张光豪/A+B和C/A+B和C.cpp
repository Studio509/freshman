#include<iostream>
using namespace std;
int main()
{
	int t,i,k=0;
	long long a,b,c;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>a>>b>>c;
		if(a+b>c)
			cout<<"Case #"<<++k<<": true"<<endl;
		else
			cout<<"Case #"<<++k<<": false"<<endl;
	}
	return 0;
}