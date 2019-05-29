#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int an,r,n,used;
    char ch;
    cin>>n>>ch;
    an = floor(sqrt(2*(n+1)))-1;
    if (an%2==0) an--;
    used= (an+1)*(an+1)/2 -1;
    r=n-used;
    for(int i=an;i>=1;i=i-2)
        {
            for(int j=0;j<(an-i)/2;j++)
               cout<<' ';
            for(int k=0;k<i;k++)
                cout<<ch;
                cout<<endl;
        }
    for(int i=3;i<=an;i=i+2)
        {
            for(int j=0;j<(an-i)/2;j++)
               cout<<' ';
            for(int k=0;k<i;k++)
                cout<<ch;
                cout<<endl;
        }
        cout<<r;
        return 0;
}