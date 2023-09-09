#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector <int> vec;

	for (int i = 0; i < n; i++)
	{
		int push;
		cin >> push;
		vec.push_back(push);
	}

	int cnt = 0;

	for (int i = 0; i < n - 1; i++)
	{
		bool b = true;

		for (int j = i + 1; j < n; j++)
		{
			if (vec[i] <= vec[j])
			{
				b = false;
				break;
			}
		}

		if (b == true)
		{
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}