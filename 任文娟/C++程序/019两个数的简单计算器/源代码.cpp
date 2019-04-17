#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    int x,y;
    char ch;
    cin>>x>>ch>>y;
    switch(ch)
    {
        case '+':cout<<x+y<<endl;break;
        case '-':cout<<x-y<<endl;break;
        case '*':cout<<x*y<<endl;break;
        case '/':
        {   if(y!=0) 
            cout<<x/y<<endl;break;
        }
        case '%':
        {   if(y!=0)
            cout<<x%y<<endl;break;
        }
        default:cout<<"ERROR"<<endl;break;
    }
    return 0;
}
