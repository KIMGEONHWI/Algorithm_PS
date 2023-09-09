#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector <int> vec(1);
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		int push;
		cin >> push;
		sum += push;
		vec.push_back(push);
	}

	int k;
	cin >> k;

	if (k >= sum)
	{
		cout << -1 << endl;
		return 0;
	}
	int cnt = 0, pos = 0;

	while (1)
	{
		pos++;

		if (pos > n)
		{
			pos = 1;
		}

		if (vec[pos] != 0)
		{
			cnt++;
			vec[pos]--;
		}

		if (cnt == k)
		{
			break;
		}
	}

	while (1)
	{
		pos++;

		if (pos > n)
		{
			pos = 1;
		}

		
		if(vec[pos] != 0)
		{
			cout << pos;
			break;
		}
	}

	return 0;
}
