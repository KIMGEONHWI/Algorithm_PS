#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector <int> vec1(21);
vector <vector<int>> vec(21, vec1);
vector <vector<int>> dy(21, vec1);

int dfs(int l, int r)
{
	if (dy[l][r] != 0)
	{
		return dy[l][r];
	}
	if (l == 1 && r == 1)
	{
		return dy[l][r] = vec[l][r];
	}
	else
	{
		if (l == 1)
		{
			return dy[l][r] = dfs(l, r - 1) + vec[l][r];
		}
		else if (r == 1)
		{
			return dy[l][r] = dfs(l - 1, r) + vec[l][r];
		}
		else
		{
			return dy[l][r] = min(dfs(l - 1, r), dfs(l, r - 1)) + vec[l][r];
		}
		
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> vec[i][j];
		}
	}

	cout << dfs(n, n);

	return 0;
}