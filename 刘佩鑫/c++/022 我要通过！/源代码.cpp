#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string test;
	int l = 0;//输入的字符串的长度
	for (int i = 0; i < n; i++)
	{
		int left = 0;
		int mid = 0;
		int right = 0;
		cin >> test;
		l = test.size();
		for (int j = 0; j < l; j++)
		{
			////如果出现了错误的字符，直接输出“NO”，并结束
			if (test[j] != 'P' && test[j] != 'A' && test[j] != 'T' && test[j] != ' ')
			{
				break;
			}
			if (test[j] == 'A')
			{
				if (left == 1)
				{
					mid++;
				}
				continue;
			}
			if (test[j] == 'P')
			{
				left++;
				continue;
			}
			if (test[j] == 'T')
			{
				if (mid >= 1)
				{
					right++;
				}
				continue;
			}
 
		}
		if (left == 1 && right == 1 && mid >= 1)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}
