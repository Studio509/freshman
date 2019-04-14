#include <iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	int i;//循环用
	int j,k,z;//循环用
	int b=0;
	cin>>a;
	i=a.size();
	for(j=0;j<i-2;j++)//最后两位是P无意义
		if(a[j]=='P')
			for(k=j+1;k<i-1;k++)
				if(a[k]=='A')
					for(z=k+1;z<i;z++)
						if(a[z]=='T')
							b=b+1;
	system("cls");
	cout<<b;
	return 0;
}
