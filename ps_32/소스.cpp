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

	for (int i = 0; i < n - 1; i++)
	{
		int min = i;

		for (int j = i + 1; j < n; j++)
		{
			if (vec[min] > vec[j])
			{
				min = j;
			}
		}

		int temp = vec[min];
		vec[min] = vec[i];
		vec[i] = temp;
	}

	for (int i = 0; i < n; i++)
	{
		cout << vec[i] << " ";
	}

	return 0;
}