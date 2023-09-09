#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector <int> vec;
	vector <int> idx;

	for (int i = 0; i < n; i++)
	{
		int push;
		cin >> push;
		vec.push_back(push);
	}

	int pcount = 1;
	int mcount = -n;

	for (int i = 0; i < n; i++)
	{
		if (vec[i] > 0)
		{
			idx.push_back(pcount);
			pcount++;
		}
		else
		{
			idx.push_back(mcount);
			mcount++;
		}
	}

	int temp = 0;

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (idx[j] > idx[j + 1])
			{
				temp = vec[j];
				vec[j] = vec[j + 1];
				vec[j + 1] = temp;

				temp = idx[j];
				idx[j] = idx[j + 1];
				idx[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << vec[i] << " ";
	}

	return 0;
}