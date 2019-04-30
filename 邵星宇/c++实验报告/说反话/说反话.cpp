#include<iostream>
using namespace std;
int main()
{
	char string[100];
	int i;
	int len = 0;
	int count = 0;
	int j;
	cin.getline(string,100);
	for (i = 0; i < 100; i++)
		if (string[i] == '\0')
			break;
	len = i;
	for (i = len-1; i >= 0; i--) {
		if (string[i] == ' ') {
			for (j = 0; j < count; j++) {
				cout << string[i+j+1];
			}
			count = 0;
			cout << " ";
		}
		else {
			if (i == 0) {
				count = count + 1;
				for (j = 0; j < count; j++) {
					cout << string[j];
				}
				count = 0;
			}
			else
				count++;
		}
	}
    return 0;
}