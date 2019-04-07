#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c,i;
	cin>>n;
    a = n / 100;
    b = n % 100 / 10;
    c = n % 10;
    for(int i=0;i<a;i++) 
		cout<<"B";
    for(int i=0;i<b;i++) 
		cout<<"S";
    for(int i=1;i<=c;i++) 
		cout<<i ;
	return 0;
}
