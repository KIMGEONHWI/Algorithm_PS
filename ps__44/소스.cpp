#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int horse(vector <int> vec, int mid)
{
	int pos = 0, cnt = 1;

	for (int i = 1; i < vec.size(); i++)
	{
		if (vec[i] - vec[pos] >= mid)
		{
			pos = i;
			cnt++;
		}
	}

	return cnt;
}

int main()
{
	int n, c;
	cin >> n >> c;

	vector <int> vec;

	for (int i = 0; i < n; i++)
	{
		int push;
		cin >> push;
		vec.push_back(push);
	}

	sort(vec.begin(), vec.end());

	int lt = 1, rt = vec[vec.size() - 1], mid = 0, ans = 0;

	while (lt <= rt)
	{
		mid = (lt + rt) / 2;

		int cnt = horse(vec, mid);

		if (cnt < c)
		{
			rt = mid - 1;
		}
		else
		{
			ans = mid;
			lt = mid + 1;
		}
	}

	cout << ans;

	return 0;
}