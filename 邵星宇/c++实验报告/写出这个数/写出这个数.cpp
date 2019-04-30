#include <iostream>
using namespace std;
int main()
{
	char *a[] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu",};
	int sum=0;
	char n[101];
	int num[11],j=0,i=0;
	cin >> n;
	while(n[i]!='\0')
	{
		sum += n[i] - '0' ;
		i++;
	}
	if(n==0)
	{
		cout << a[0]<<endl;
		return 0;
	}
	while(sum)
	{
		num[j] = sum%10;
		sum /= 10;
		j++;
	}
	for(int i=j-1;i>0;--i)
		cout << a[num[i]] << " ";
	cout << a[num[0]] <<endl;
	return 0;
}