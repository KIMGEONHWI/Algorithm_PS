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

	int min = 999, max = 0;

	for (int i = 0; i < vec.size(); i++)
	{
		if (max < vec[i])
		{
			max = vec[i];
		}

		if (min > vec[i])
		{
			min = vec[i];
		}
	}

	cout << max - min;
}