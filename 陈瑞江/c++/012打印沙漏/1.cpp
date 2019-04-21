#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=4;i>=1;i--)
		{for(j=1;j<=4-i;j++)
			cout<<" ";
	        cout<<"*";
			for(j=1;j<=2*i-1;j++)
				cout<<" ";
				cout<<"*"<<endl;
        }
	cout<<"    *"<<endl;
	for(i=1;i<=4;i++)
		{for(j=1;j<=4-i;j++)
			cout<<" ";
	        cout<<"*";
			for(j=1;j<=2*i-1;j++)
				cout<<" ";
				cout<<"*"<<endl;
	}
	return 0;
}
