#include<iostream>
using namespace std;

int main()
{
	int len;
	int *num;
	int A1[1000];
	int a1=0;
	int A2[1000];
	int a2=0;
	int A3[1000];
	int a3=0;
	int A4[1000];
	int a4=0;
	int A5[1000];
	int a5=0;
	cin >> len;
	num = new int[1001];
	for (int i = 0; i < len; i++) {
		cin >> num[i];
	}
	for (int i = 0; i < len; i++) {
		if (num[i] % 5 == 0) {
			A1[a1] = num[i];
			a1++;
		}
		if (num[i] % 5 == 1) {
			A2[a2] = num[i];
			a2++;
		}
		if (num[i] % 5 == 2) {
			A3[a3] = num[i];
			a3++;
		}
		if (num[i] % 5 == 3) {
			A4[a4] = num[i];
			a4++;
		}
		if (num[i] % 5 == 4) {
			A5[a5] = num[i];
			a5++;
		}
	}
	if (a1 != 0) {
		int sum = 0;
		for (int i = 0; i < a1; i++) {
			if (A1[i] % 2 == 0) {
				sum = sum + A1[i];
			}
		}
		if (sum == 0)
			cout << "N ";
		else 
			cout << sum << " ";
	}
	else
		cout << "N ";
	if (a2 != 0) {
		int sum = 0;
		for (int i = 0; i < a2; i++) {
			if (i % 2 != 0)
				sum = (-A2[i]) + sum;
			else
				sum = A2[i] + sum;
		}
		cout << sum << " ";
	}
	else
		cout << "N ";
	if (a3 != 0) {
		cout << a3 << " ";
	}
	else
		cout << "N ";
	if (a4 != 0) {
		float ava = 0;
		for (int i = 0; i < a4; i++) {
			ava = A4[i] + ava;
		}
		ava = ava / a4;
		printf("%.1f ", ava);
	}
	else
		cout << "N ";
	if (a5 != 0) {
		int max=A5[0];
		for (int i = 0; i < a5; i++) {
			if (A5[i] > max) {
				max = A5[i];
			}
		}
		cout << max ;
	}
	else
		cout << "N";
    return 0;
}
