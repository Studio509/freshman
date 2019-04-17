#include <iostream>
using namespace std;
int main()
{
    int i,n,a[100],b[100],c[100];
    cout<<"试用例的个数为:";
    cin>>n;
    cout<<"请依次输入试用例:"<<endl;
    for(i=0;i<n;i++)
	cin>>a[i]>>b[i]>>c[i];
    for(i=0;i<n;i++)
		if(a[i]+b[i]>c[i])
		cout<<"Case" <<" "<<"#"<<i+1<<": true"<<endl;
    else 
	cout<<"Case" <<" "<<"#"<<i+1<<": false"<<endl;
    return 0;
}
