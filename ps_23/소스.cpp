#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector <int> vec;
	int max = numeric_limits<int>::min();
	int cnt = 1;

	for (int i = 0; i < n; i++)
	{
		int push;
		cin >> push;
		vec.push_back(push);
	}

	for (int i = 0; i < n - 1; i++)
	{
		if (vec[i] <= vec[i + 1])
		{
			cnt++;
		}
		else
		{
			cnt = 1;
		}

		if (max < cnt)
		{
			max = cnt;
		}
	}

	cout << max;

	return 0;
}