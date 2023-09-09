#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector <int> dy(50);

int dfs(int n)
{
	if (dy[n] != 0)
	{
		return dy[n];
	}
	if (n == 1 || n == 2)
	{
		return n;
	}
	else
	{
		return dy[n] = dfs(n - 1) + dfs(n - 2);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	dfs(n);

	cout << dy[n];

	return 0;
}