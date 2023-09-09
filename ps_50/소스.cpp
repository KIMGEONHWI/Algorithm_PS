#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int h, w;
	cin >> h >> w;

	vector <vector <int>> vec2;

	for (int i = 0; i < h; i++)
	{
		vector <int> vec1;
		for (int j = 0; j < w; j++)
		{
			int push;
			cin >> push;
			vec1.push_back(push);
		}

		vec2.push_back(vec1);
	}

	int h_1, w_1;
	cin >> h_1 >> w_1;

	int max = numeric_limits<int>::min();

	for (int i = 0; i <= h - h_1; i++)
	{
		for (int j = 0; j <= w - w_1; j++)
		{
			int sum = 0;

			for (int k = i; k < i + h_1; k++)
			{
				for (int l = j; l < j + w_1; l++)
				{
					sum += vec2[k][l];
				}
			}

			if (max < sum)
			{
				max = sum;
			}
		}
	}


	cout << max;

	return 0;
}