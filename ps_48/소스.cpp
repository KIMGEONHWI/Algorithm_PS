#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	vector <vector <int>> vec2;

	for (int i = 0; i < 9; i++)
	{
		vector <int> vec1;

		for (int j = 0; j < 9; j++)
		{
			int push;
			cin >> push;
			vec1.push_back(push);
		}
		vec2.push_back(vec1);
	}
	
	for (int i = 0; i < 9; i++)
	{
		int sum = 0;

		for (int j = 0; j < 9; j++)
		{
			sum += vec2[i][j];
		}

		int avg = round(sum / 9.0);

		cout << avg << " ";

		int dec = 0, idx = 0;
		int min = numeric_limits<int>::max();

		for (int j = 0; j < 9; j++)
		{
			dec = abs(avg - vec2[i][j]);

			if (dec < min)
			{
				min = dec;
				idx = j;
			}
			else if (dec == min)
			{
				if (vec2[i][idx] < vec2[i][j])
				{
					idx = j;
				}
			}
		}

		cout << vec2[i][idx] << endl;
	}

	return 0;
}