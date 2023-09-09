#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	vector <int> vec;

	for (int i = 0; i < n; i++)
	{
		int push;
		cin >> push;
		vec.push_back(push);
	}

	int sum = 0;

	for (int i = 0; i < k; i++)
	{
		sum += vec[i];
	}

	int max = sum;

	for (int i = k; i < n; i++)
	{
		sum -= vec[i - k];
		sum += vec[i];
		
		if (sum > max)
		{
			max = sum;
		}
	}

	cout << max;

	return 0;
}