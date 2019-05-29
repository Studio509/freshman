#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a[10] = {};
    for (int i = 0; i < 10; i++){
        cin >> a[i];
    }
    int sum = 0;
    for (int i = 0; i < 10; i++){
        sum+= a[i];
    }

    int *a1 = new int[sum];
    int count = 0;
    for (int i = 0; i < 10; i++){

        if (a[i] != 0){
            for (int j = count; j< a[i]+count; j++){
                a1[j] = i;
            }
        }
        count += a[i];
    }
    if (a[0] != 0){
        int temp;
        temp = a1[0];
        a1[0] = a1[0 + a[0]];
        a1[0 + a[0]] = temp;
    }
    for (int i = 0; i < sum; i++){
        cout << a1[i];
    }
    delete [] a1;
    return 0;
}