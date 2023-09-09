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

	for (int i = 1; i < n; i++)
	{
		int temp = vec[i];
		int idx = i;

		for (int j = i - 1; j >= 0; j--)
		{
			if (vec[j] > temp)
			{
				vec[j + 1] = vec[j];
			}
			else
			{
				break;
			}

			idx = j;
		}

		vec[idx] = temp;
	}


	for (int i = 0; i < n; i++)
	{
		cout << vec[i] << " ";
	}


	return 0;
}