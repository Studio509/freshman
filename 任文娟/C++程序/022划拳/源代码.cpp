#include<iostream>
using namespace std;
int main()
{
    int N,a1,a2,b1,b2,m=0,n=0,sum;
    cin>>N;
    for(int i=0;i<N;i++)
    {
       cin>>a1>>a2>>b1>>b2;
       sum=a1+b1;
       if(sum==a2&&sum==b2)
        continue;
       else if(sum==a2)
        m++;
       else if(sum==b2)
        n++;
    }
    cout<<n<<" "<<m<<endl;
    return 0;
}
