#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector <int> map2(30);
	vector <vector <int>> map(30, map2);
	vector <vector <int>> dy(30, map2);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> map[i][j];
		}
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (dy[i - 1][j] == 0 || dy[i][j - 1] == 0)
			{
				dy[i][j] = max(dy[i - 1][j], dy[i][j - 1]) + map[i][j];
			}
			else
			{
				dy[i][j] = min(dy[i - 1][j], dy[i][j - 1]) + map[i][j];
			}
		}
	}

	cout << dy[n][n];

	return 0;
}