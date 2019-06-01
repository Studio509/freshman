#include<iostream>
#include<string>
using namespace std;

int main() {
    int N, sum, flag, count = 0;
    string a[100];
    int b[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
    int c[11] = { '1','0','X','9','8','7','6','5','4','3','2' };
    cin >> N;
    for (int i = 0; i < N; i++)cin >> a[i];
    for (int i = 0; i < N; i++) {
        sum = 0; flag = 1;
        for (int j = 0; j < 17; j++) 
            if ('0' <= a[i][j] && a[i][j] <= '9')
                sum += (a[i][j] - '0')*b[j];
            else {
                flag = 0;
                break;
            }
        if (flag == 1) 
            if (c[sum % 11] == a[i][17])count++;
            else cout << a[i] << endl;
        else cout << a[i] << endl;
    }
    if (count == N)
        cout << "All passed";
    return 0;
}