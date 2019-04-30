#include<iostream>
using namespace std;
bool isprime(int a) {
	int i;
	if (a == 1)
		return false;
	for (i = 2; i*i <= a; i++) {
		if (a%i == 0)
			return false;
	}
	return true;
}
int main()
{
	int M;
	int N;
	int k = 0;
	cin >> M;
	cin >> N;
	int count = 10;
	for (int i = 2; k < N; i++) {
		if (isprime(i)) {
			k++;
			if (k >= M)
			{
				if (count == 10) {
					cout << i;
					count--;
				}
				else {
					if (count == 1) {
						cout << " " << i<<endl;
						count = 10;
					}
					else {
						count--;
						cout << " " << i;
					}
				}
			}
		}
	}
	return 0;
}
