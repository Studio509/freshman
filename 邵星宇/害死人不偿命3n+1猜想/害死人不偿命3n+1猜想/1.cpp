#include<iostream>
using namespace std;
int main() 
{
    int n, j=0;
    cin >> n;
    while(n != 1) 
    {
        if(n % 2 == 0)
        {
        n = n / 2;
        j++;
        }
        else
        {
        n = (3 * n + 1) / 2;
        j++;
        }
    }
    cout << j;
    return 0;
}