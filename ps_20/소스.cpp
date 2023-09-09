#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> vec1, vec2;

	for (int i = 0; i < 2 * n; i++)
	{
		int push;
		cin >> push;

		if (i < n)
		{
			vec1.push_back(push);
		}
		else
		{
			vec2.push_back(push);
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (vec1[i] == vec2[i])
		{
			cout << "D" << endl;
		}
		else if (vec1[i] + vec2[i] == 3)
		{
			if (vec1[i] > vec2[i])
			{
				cout << "A" << endl;
			}
			else
			{
				cout << "B" << endl;
			}
		}
		else if (vec1[i] + vec2[i] == 4)
		{
			if (vec1[i] < vec2[i])
			{
				cout << "A" << endl;
			}
			else
			{
				cout << "B" << endl;
			}
		}
		else if (vec1[i] + vec2[i] == 5)
		{
			if (vec1[i] > vec2[i])
			{
				cout << "A" << endl;
			}
			else
			{
				cout << "B" << endl;
			}
		}
	}

	return 0;
}