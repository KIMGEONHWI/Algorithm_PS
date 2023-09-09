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

	vector <int> coin(n + 1);

	for (int i = 1; i <= n; i++)
	{
		cin >> coin[i];
	}

	int m;
	cin >> m;

	vector <int> dy(m + 1, 987654321);
	dy[0] = 0;

	for (int i = 1; i <= n; i++)
	{
		for (int j = coin[i]; j <= m; j ++)
		{
			dy[j] = min(dy[j], dy[j - coin[i]] + 1);
		}
	}

	cout << dy[m];

	return 0;
}