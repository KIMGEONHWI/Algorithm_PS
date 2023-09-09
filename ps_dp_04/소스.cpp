#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector <int> vec(n + 1);
	vector <int> dy(n + 1);

	dy[1] = 1;

	for (int i = 1; i <= n; i++)
	{
		cin >> vec[i];
	}

	for (int i = 2; i <= n; i++)
	{
		int max = 0;

		for (int j = i - 1; j >= 1; j--)
		{
			if (max < dy[j] && vec[i] > vec[j])
			{
				max = dy[j];
			}
		}

		dy[i] = max + 1;
	}

	int max = -987654321;

	for (int i = 1; i <= n; i++)
	{
		if (max < dy[i])
		{
			max = dy[i];
		}

	}

	cout << max;

	return 0;
}