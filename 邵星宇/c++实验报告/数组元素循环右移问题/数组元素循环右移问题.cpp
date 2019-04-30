#include<iostream>
using namespace std;
int main()
{
	int *list;
	int num;
	int times;
	int i;
	int j;
	int temp;
	cin >> num;
	cin >> times;
	list = new int[num];
	for (i = 0; i < num; i++) {
		cin>>list[i] ;
	}
	for (i = 0; i < times; i++) {
		temp = list[num - 1];
		for (j = num; j > 1; j--) {
			list[j - 1] = list[j - 2];
		}
		list[0] = temp;
	}
	for (i = 0; i < num; i++) {
		cout << list[i];
		if (i != num - 1)
			cout << " ";
	}
    return 0;
}