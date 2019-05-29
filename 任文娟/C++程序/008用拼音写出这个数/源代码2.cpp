#include<iostream>
using namespace std;
#include<string>
int main()
{
	int sum=0,i;
	string str;
	cin>>str;
	for(i=0;i<str.length();i++)
		sum=sum+str[i]-'0';
	string pingyin[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	string str1=to_string(static_cast<long long>(sum));
	for(i=0;i<str1.length();i++)
	{
		cout<<pingyin[str1[i]-'0'];
		if(i!=str1.length()-1)
			cout<<" ";
	}
	cout<<endl;
	return 0;
}
