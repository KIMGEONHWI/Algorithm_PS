#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <vector <int>> vec(101, vector <int> (101));

int dfs(int n, int r)
{
	if (vec[n][r] != 0)
	{
		return vec[n][r];
	}
	if (r == 0 || n == r)
	{
		return 1;
	}
	else
	{
		return vec[n][r] = dfs(n - 1, r - 1) + dfs(n - 1, r);
	}
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, r;
	cin >> n >> r;

	int ans = dfs(n, r);

	cout << ans;

	return 0;
}