#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	vector <int> vec(n + 1);
	vector <int> res(n + 1);
	for (int i = 1; i <= n; i++)
	{
		vec[i] = i;
	}

	int i = 1, j = 1, cnt = 0;
	int same = 0;

	while (cnt < n - 1)
	{
		if (vec[i] != 0)
		{
			j++;
		}
		i++;

		if (same != j && (j - 1) % k == 0)
		{
			same = j;
			vec[i - 1] = 0;
			res[i - 1] = 1;
			cnt++;
		}

		if (i > n)
		{
			i = 1;
		}
			
	}

	for (int i = 1; i <= n; i++)
	{
		if (res[i] == 0)
		{
			cout << i;
		}
	}

	return 0;
}