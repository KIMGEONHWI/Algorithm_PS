#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector <int> vec_r(n + 1);
	for (int i = 1; i <= n; i++)
	{
		cin >> vec_r[i];
	}

	vector <int> dy(n + 1);
	dy[1] = 1;

	for (int i = 2; i <= n; i++)
	{
		int max = 0;

		for (int j = i; j >= 1; j--)
		{
			if (max < dy[j] && vec_r[i] > vec_r[j])
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
