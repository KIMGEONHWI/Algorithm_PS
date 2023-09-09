#include <iostream>
using namespace std;

int digit_sum(int x)
{
	int sum = 0;

	while (1)
	{
		if (x < 10)
		{
			sum += x;
			break;
		}
		else
		{
			sum += x % 10;
			x /= 10;
		}
	}

	return sum;
}
int main()
{
	int n;
	cin >> n;

	int max = numeric_limits<int>::min();
	int max_p = numeric_limits<int>::min();

	for (int i = 0; i < n; i++)
	{
		int push;
		cin >> push;

		if (max < digit_sum(push))
		{
			max = digit_sum(push);
			max_p = push;
		}
		else if (max == digit_sum(push))
		{
			if (max_p < push)
			{
				max_p = push;
			}
		}
	}

	cout << max_p;

	return 0;
}