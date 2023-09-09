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

	for (int i = 0; i < n; i++)
	{
		int rank = 1;
		
		for (int j = i - 1; j >= 0; j--)
		{
			if (vec[i] <= vec[j])
			{
				rank++;
			}
		}

		cout << rank << " ";
	}

	return 0;
}