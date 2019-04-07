#include <iostream>
using namespace std;
int A(int m)
{
	int i;
	for (i=2;i<=m-1;i++)
		if(m%i==0) return 0;
	return 1;
}
int main()
{
	int m;
    cin>>m;
	if(A(m)) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	return 0;
}
