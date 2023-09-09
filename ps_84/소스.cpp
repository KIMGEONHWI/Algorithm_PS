#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector <int> t(20);
vector <int> p(20);

int n;
int maxi = -987654321;

void dfs(int L, int sum)
{
	if (L == n + 1)
	{
		if (sum > maxi)
		{
			maxi = sum;
		}

	}
	else
	{
		if (L + t[L] <= n + 1)
		{
			dfs(L + t[L], sum + p[L]);
		}
		
		dfs(L + 1, sum);
	}
}
int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		int x, y;
		cin >> x >> y;

		t[i] = x;
		p[i] = y;		
	}

	dfs(1, 0);

	cout << maxi;

	return 0;
}