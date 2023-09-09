#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

struct Edge {
	int vex;
	int dis;

	Edge(int a, int b)
	{
		vex = a;
		dis = b;
	}

	bool operator < (const Edge& b) const
	{
		return dis > b.dis;
	}
};
int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	priority_queue<Edge> Q;

	vector <pair<int, int>> map[30];

	int n, m;
	cin >> n >> m;

	vector <int> dist(n + 1, numeric_limits<int>::max());

	for (int i = 1; i <= m; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;

		map[a].push_back(make_pair(b, c));
	}

	Q.push(Edge(1, 0));
	dist[1] = 0;

	while(!Q.empty())
	{
		int now = Q.top().vex;
		int cost = Q.top().dis;
		Q.pop();

		if (cost > dist[now])
		{
			continue;
		}

		for (int i = 0; i < map[now].size(); i++)
		{
			int next = map[now][i].first;
			int next_cost = map[now][i].second + cost;

			if (dist[next] > next_cost)
			{
				dist[next] = next_cost;
				Q.push(Edge(next, next_cost));
			}
			
		}
	}

	for (int i = 2; i <= n; i++)
	{
		if (dist[i] != numeric_limits<int>::max())
		{
			cout << i << " : " << dist[i];
		}
		else
		{
			cout << i << " : " << "impossible";
		}
		
	}

	return 0;
}