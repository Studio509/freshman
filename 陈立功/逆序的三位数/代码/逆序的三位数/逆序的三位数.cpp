#include <iostream>
using namespace std;
int main()
{
	int m,i,n,j;
	cout<<"Enter a three-digit number:";
	cin>>m;
	i=m%10;
	n=m%100/10;
	j=m/100;
	cout<<"negative sequence:";
	if(i!=0)
		cout<<i<<n<<j;
	else
	{
		if(n!=0)
			cout<<n<<j;
		else
			cout<<j;
	}
	cout<<endl;

}