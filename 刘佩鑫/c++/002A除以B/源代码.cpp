#include <iostream>
#include <string>
using namespace std; 
int main()
{
	int b,n=0,t=0;
	string a;
	cout<<"请输入a";
	cin>>a;
	cout<<"请输入b";
	cin>>b;
	t=(a[0]-'0')/b;
	if((t!=0&&a.length() >1)||a.length()==1)	
		cout<<"商数为"<<t;
	n=(a[0]-'0')%b;
	for(int i=1;i<a.length() ;i++){
		t=(n*10+a[i]-'0')/b;
		cout<<t;
		n=(n*10+a[i]-'0')%b;
	}
	cout<<"余数为"<<" "<<n;
	return 0;
}
