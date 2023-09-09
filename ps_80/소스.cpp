#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n;
int mini = 2147000000;

vector <pair <int, int>> vec[21];
vector <int> ch(21);

void dfs(int L, int end, int sum)
{
	if (L == end)
	{
		if (sum < mini)
		{
			mini = sum;
		}
	}
	else
	{
		for (int i = 0; i < vec[L].size(); i++)
		{
			if (ch[L] == 0)
			{
				ch[L] = 1;
				dfs(vec[L][i].first, end, sum + vec[L][i].second);
				ch[L] = 0;
			}
		}
	}
}

int main()
{
	int m;
	cin >> n >> m;

	for (int i = 1; i <= m; i++)
	{
		int x, y, cost;
		cin >> x >> y >> cost;

		pair <int, int> p;
		p = make_pair(y, cost);

		vec[x].push_back(p);
	}

	for (int i = 2; i <= n; i++)
	{
		mini = numeric_limits<int>::max();
		dfs(1, i, 0);

		if (mini == numeric_limits<int>::max())
		{
			cout << i << " : impossible" << endl;
		}
		else
		{
			cout << i << " : " << mini << endl;
		}
	}

	return 0;
}