#include <iostream>
using namespace std;
int main()
{
	int n,x[100],y[100],z[100],i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x[i]>>y[i]>>z[i];
	}
	system("cls");
	for(i=0;i<n;i++)
		if((x[i]+y[i])>z[i])
			cout<<"case #"<<i+1<<" true"<<endl;
		else
			cout<<"case #"<<i+1<<" false"<<endl;
	return 0;
}
