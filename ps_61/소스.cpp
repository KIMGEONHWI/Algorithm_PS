#include <iostream>
#include <vector>
using namespace std;

vector <int> vec(11);
int n, m;
int res = 0;

void dfs(int L, int ans)
{
	if (L == n + 1)
	{
		if (ans == m)
		{
			res++;
		}
	}
	else
	{
		dfs(L + 1, ans + vec[L]);
		dfs(L + 1, ans - vec[L]);
		dfs(L + 1, ans);
		
	}
}

int main()
{
	cin >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		int push;
		cin >> push;
		vec[i] = push;
	}

	dfs(1, 0);

	if (res == 0)
	{
		cout << "-1";
	}
	else
	{
		cout << res;
	}


	return 0;
}