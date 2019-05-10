#include<iostream>
#include<string>
using namespace std;
int main()
{
string a,b;
int m,n,i,j,count=0;
cin>>a>>b;
m=a.length();
n=b.length();
for(i=0;i<=m;i++)
	for(j=0;j<=n;j++)
		if(a[i]==b[j])
			count++;
if(count==n)
cout<<"yes "<<m-count<<endl;
else
cout<<"no "<<n-count<<endl;
return 0;
}
