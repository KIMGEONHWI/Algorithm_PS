#include <iostream>
#include <vector>
#include <algorithm>
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

	sort(vec.begin(), vec.end());
	
	int lt = 0, rt = n - 1, mid = 0;

	while (lt <= rt)
	{
		mid = (lt + rt) / 2;

		if (vec[mid] == m)
		{
			cout << mid + 1;
			break;
		}
		else if (vec[mid] < m)
		{
			lt = mid + 1;

		}
		else if (vec[mid] > m)
		{
			rt = mid - 1;
		}
	}

	return 0;
}