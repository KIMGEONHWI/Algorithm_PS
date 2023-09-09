#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	vector <int> vec;

	for (int i = 0; i < n; i++)
	{
		int push;
		cin >> push;
		vec.push_back(push);
	}

	int sum = 0;
	int max = numeric_limits<int>::min();

	for (int i = 0; i < n; i++)
	{
		if (vec[i] <= m)
		{
			if (sum > max)
			{
				max = sum;
			}
			sum = 0;
		}
		else
		{
			sum++;
		}

		if (i == n - 1)
		{
			if (sum > max)
			{
				max = sum;
			}
		}
	}

	if (max == 0)
	{
		cout << "-1";
	}
	else
	{
		cout << max;
	}

	return 0;
}