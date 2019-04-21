#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c,m;
    cin>>n;
    a=n%10;
    b=n/10%10;
    c=n/100;
    if(a==0&&b!=0&&c!=0)
       m=c+b*10;
    else if(a==0&&b==0&&c!=0)
       m=c;
    else
       m=a*100+b*10+c;
    cout<<m<<endl;
    return 0;
}
