#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int h, w;
	cin >> h >> w;

	vector <int> dp1(w + 1);
	vector <vector <int>> dp(h + 1, dp1);

	for (int i = 1; i < h + 1; i++)
	{
		for (int j = 1; j < w + 1; j++)
		{
			int push;
			cin >> push;
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + push;
		}
	}

	int h1, w1;
	cin >> h1 >> w1;

	int max = numeric_limits<int>::min();
	int sum = 0;

	for (int i = h1; i < h + 1; i++)
	{
		for (int j = w1; j < w + 1; j++)
		{
			sum = dp[i][j] - dp[i - h1][j] - dp[i][j - w1] + dp[i - h1][j - w1];
			
			if (max < sum)
			{
				max = sum;
			}
		}
	}

	cout << max;

	return 0;
}