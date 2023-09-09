#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector <int> vec;
	vector <int> res(n);

	for (int i = 0; i < n; i++)
	{
		int push;
		cin >> push;
		vec.push_back(push);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (res[j] != 0)
			{
				vec[i]++;
			}

			if (j == vec[i])
			{
				res[j] = i + 1;
				break;
			}
		}
	}

	for (int i = 0; i < res.size(); i++)
	{
		cout << res[i] << " ";
	}

	return 0;
}