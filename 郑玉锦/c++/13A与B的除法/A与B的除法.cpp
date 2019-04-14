#include <iostream>
using namespace std;
int main()
{
	int a;//除数
	int b;//被除数
	int c;//商
	int d;//余数
	cin>>a;
	cin>>b;
	c=a/b;
	d=a%b;
	system("cls");
	cout<<c<<" "<<d<<endl;
}
