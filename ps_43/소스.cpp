#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	vector <int> vec;
	int sum_vec = 0, max = numeric_limits<int>::min();

	for (int i = 0; i < n; i++)
	{
		int push;
		cin >> push;

		sum_vec += push;

		if (push > max)
		{
			max = push;
		}

		vec.push_back(push);
	}

	int lt = 1, rt = sum_vec, mid = 0;

	int ans = 0;

	while (lt <= rt)
	{
		mid = (lt + rt) / 2;
		int cnt = 0, sum = 0;

		for (int i = 0; i < vec.size() - 1; i++)
		{
			sum += vec[i];

			if (sum + vec[i + 1] > mid)
			{
				sum = 0;
				cnt++;
			}
		}
		
		cnt++;

		if (mid >= max && cnt <= m)
		{
			ans = mid;
			rt = mid - 1;
		}
		else
		{
			lt = mid + 1;
		}
	}

	cout << ans;

	return 0;
}