#include<iostream>
using namespace std;
int main()
{
    int x,a,b;
    cin>>x;
    a=x%16;
    b=x/16*10+a;
    cout<<b<<endl;
    return 0;
}
