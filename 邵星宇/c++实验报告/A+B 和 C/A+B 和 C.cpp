#include<iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	int i,j;
	long** list;
	list = new long*[T];
	for(i=0;i<T;i++)
	{
		list[i] = new long[3];
	}
	for (i = 0; i < T; i++) {
		for (j = 0; j < 3; j++)
			cin >> list[i][j];
	}
	for (i = 0; i < T; i++) {
		if (list[i][0] + list[i][1] > list[i][2]) {
			cout << "Case #" << i + 1 << ": true" << endl;
		}
		else
			cout << "Case #" << i + 1 << ": false" << endl;
	}
    return 0;
}