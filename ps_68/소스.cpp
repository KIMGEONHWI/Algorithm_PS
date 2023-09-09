#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
int mini = numeric_limits<int>::max();
vector <pair <int, int> > vec[30];
vector <int> ch(30);

void dfs(int v, int sum)
{
	if (v == n)
	{
		if (sum < mini)
		{
			mini = sum;
		}
	}
	else
	{
		for (int i = 0; i < vec[v].size(); i++)
		{
			if (ch[v] == 0)
			{
				ch[v] = 1;
				dfs(vec[v][i].first, sum + vec[v][i].second);
				ch[v] = 0;
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

	dfs(1, 0);

	cout << mini;

	return 0;
}