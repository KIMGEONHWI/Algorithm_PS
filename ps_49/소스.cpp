#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector <int> front;

	for (int i = 0; i < n; i++)
	{
		int push;
		cin >> push;
		front.push_back(push);
	}

	vector <int> right;

	for (int i = 0; i < n; i++)
	{
		int push;
		cin >> push;
		right.push_back(push);
	}

	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (front[i] < right[j])
			{
				sum += front[i];
			}
			else
			{
				sum += right[j];
			}
		}
	}

	cout << sum;

	return 0;
}