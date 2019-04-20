#include<iostream>
#include<cmath>
using namespace std;
int main()
{	
	char h;	
	int l;	
	cin>>l>>h;
	int lie=ceil(l/2.0);
	for(int i=1;i<=lie;i++)
	{		
		for(int j=0;j<l;j++)
		{			
			if(i==1||i==lie)
				cout<<h;	
			else
			{		
				if(j==0||j==l-1)	
					cout<<h;			
				else		
					cout<<" ";		
			}	
		}	
		cout<<endl;
	}		
	return 0;
} 
