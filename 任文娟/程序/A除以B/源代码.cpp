#include <iostream>
using namespace std;
#include <string>
int main()
{
	string A;
	int B,R,Q,i;
	cin>>A>>B;
	Q=(A[0]-'0')/B;
	if(Q!=0&&A.length()>1||A.length()==1)
		cout<<Q;
	R=(A[0]-'0')%B;
	for(i=1;i<A.length();i++)
	{
		Q=(R*10+A[i]-'0')/B;
		cout<<Q;
		R=(R*10+A[i]-'0')%B;
	}
	cout<<" "<<R<<endl;
	return 0;
}
