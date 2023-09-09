#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int sum = 0;

	for (int i = 1; i <= n; i++)
	{
		int count = 0;

		for (int j = i; j > 0; j /= 10)
		{
			count++;
		}

		sum += count;
	}

	cout << sum;

	return 0;
}