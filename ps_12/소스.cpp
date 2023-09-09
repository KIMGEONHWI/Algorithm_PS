#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int sum = 0;

	int j = 10;
	int k = 9;

	for (int i = 1; ;i++)
	{
		if (n >= j)
		{
			sum += (i * k);
			j = j * 10;
			k = k * 10;
		}
		else
		{
			sum += (i * (n - ((j / 10) - 1)));
			break;
		}
	}

	cout << sum;

	return 0;
}