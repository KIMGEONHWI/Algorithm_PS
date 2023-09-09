#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector <int> vec1;
	vector <int> vec2;

	for (int i = 0; i < n; i++)
	{
		int push1, push2;
		cin >> push1 >> push2;

		vec1.push_back(push1);
		vec2.push_back(push2);
	}

	for (int i = 0; i < n; i++)
	{
		int sum = 0;

		for (int j = 1; j <= vec1[i]; j++)
		{
			sum += j;
		}

		if (vec2[i] == sum)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}

	return 0;
}