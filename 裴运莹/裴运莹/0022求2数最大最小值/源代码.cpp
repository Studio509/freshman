#include <iostream>
using namespace std;
void m(int b[2],int x, int y)
{
	b[0]=(x>y)? x:y;
	b[1]=(x<y)? x:y;
}
int main()
{
	int x,y,a[2];
    cin>>x>>y;
	m(a,x,y);
	cout<<"max="<<a[0]<<"min="<<a[1]<<endl;
	return 0;
}
