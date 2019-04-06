#include <iostream>
using namespace std;
int main()
{
	int c[100],x[100],i=0,j=0;
	char a;
	while(1)
	{
	   cin>>c[i]>>x[i];
	   i++;
	   a=cin.get();
	   if(a=='\n')
		   break;
	}
	system("cls");
	for(j=0;j<i;j++)
	{
		if(c[j]==0)
			cout<<c[j]<<" ";
		else if(x[j]==0)
			cout<<x[j]<<" ";
		else if(x[j]==1)
			cout<<c[j]*x[j]<<" ";
		else
		{
			cout<<c[j]*x[j]<<" "<<x[j]-1<<" ";
		}
	}
}
