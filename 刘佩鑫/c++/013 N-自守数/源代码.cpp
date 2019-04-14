#include<iostream>
using namespace std;
int main()
{
	int n, i, k2, shi = 1, j, n1, k, k3, wei = 0, k1,k4,flage = 1;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		wei = 0;
		shi = 1;
		flage = 1;
		cin >> n1;
		k1 = n1;
		k = n1 * n1;
		while (k1 > 0)
		{
			k1 /=10;
			wei++;
		}
		for (int z = 1; z <=wei; z++)
		{
			shi *= 10;
		}
		for (j = 1; j <=9; j++)
		{
			k2 = k * j;
			k4 = k2 % shi;
			if (k4 == n1)
			{
				cout << j << ' ' << k2 << endl;
				flage = 0;
				break;
			}
		}
		if (flage == 1)
			cout << "No" << endl;
	}
	system("pause");
	return 0;
}
