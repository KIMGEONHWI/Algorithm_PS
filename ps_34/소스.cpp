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
		for (int j = 0; j < n - i - 1; j++)
		{
			if (vec[j] > vec[j + 1])
			{
				int temp = 0;
				temp = vec[j];
				vec[j] = vec[j + 1];
				vec[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << vec[i] << " ";
	}
	return 0;
}