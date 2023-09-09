#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, m;
int res = 987654321;

vector <pair<int, int>> hs;
vector <pair<int, int>> pz;

vector <int> ch(52);

void dfs(int L, int s)
{
	if (L == m)
	{
		int sum = 0;

		for (int i = 0; i < hs.size(); i++)
		{
			int min = 987654321;

			int x1 = hs[i].first;
			int y1 = hs[i].second;

			for (int j = 0; j < n; j++)
			{
				int x2 = pz[ch[j]].first;
				int y2 = pz[ch[j]].second;

				int dis = abs(x2 - x1) + abs(y2 - y1);

				if (min > dis)
				{
					min = dis;
				}
			}

			sum += min;
		}

		if (res > sum)
		{
			res = sum;
		}
	}
	else
	{
		for (int i = s; i < pz.size(); i++)
		{
			ch[L] = i;
			dfs(L + 1, i + 1);
		}
	}
}
int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			int push;
			cin >> push;
			if (push == 1)
			{
				hs.push_back(make_pair(i, j));
			}
			else if (push == 2)
			{
				pz.push_back(make_pair(i, j));
			}
		}
	}

	dfs(0, 0);
	
	cout << res;

	return 0;
}