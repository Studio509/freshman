#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
    int year;
    float t,salary;
    cin>>year>>t;
    if(year>=5)
    {
        if(t>40)
          salary=40*50+(t-40)*1.5*50;
        else
          salary=50*t;
    }
    else
    {
        if(t>40)
          salary=30*50+(t-40)*1.5*30;
        else
          salary=30*t;
    }
    cout<<fixed<<setprecision(2)<<salary<<endl;
    return 0;
}
