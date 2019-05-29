#include <iostream>
#define CLK_TCK 100;
#include <iomanip>

using namespace std;

int main()
{
    int c1,c2;
    int hh,mm,ss;
    cin >> c1 >> c2;
    int sum;
    float r;
    sum = (c2 - c1)/CLK_TCK;
    r = (c2 - c1)%CLK_TCK;
    if (r >=50) sum++;
    hh = sum / 3600;
    sum = sum % 3600;
    mm = sum / 60;
    ss = sum % 60;
    cout<<setfill('0')<<setw(2)<<hh<<":";
    cout<<setfill('0')<<setw(2)<<mm<<":";
    cout<<setfill('0')<<setw(2)<<ss;
    return 0;
}
