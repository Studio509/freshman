#include<iostream>

using namespace std;

int main()
{
	int n,i=0;
	
	//cout<<"请输入一个数\n";
	
	cin>>n;

	while(n!=1)
	{
		if(n%2==0)
		{
			n=n/2;
		}
		else
	   {
	     n=(n*3+1)/2; 
	   }
	     i=i+1;
	}

	cout<<i<<endl;
return 0;
}


