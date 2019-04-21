# include <iostream>
using namespace std;


int main()
{
    int n;
    int num=0;
    cin>>n;

while(1)
{
{
    if(n%2==0)
        n=n/2;
    else
        n=(n*3+1)/2;
    num++;
}
if(n=1)
	break;
}
cout<<num<<endl;
return 0;
}
