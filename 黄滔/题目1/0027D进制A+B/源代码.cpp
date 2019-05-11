#include<iostream>
using namespace std;

int main()
{  
	int A,B,D,C,a=1,b[100],i=0;
	cin>>A>>B>>D;
	 C=A+B;
	while(a!=0)
	{   
	   a=C/D;
	   b[i]=C%D;
	   C=a;
	   i++;
	}
	for(i=i-1;i>=0;i--)
	 cout<<b[i];
	return 0;
}
