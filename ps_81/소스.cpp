#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Edge
{
	int s;
	int e;
	int val;

	Edge(int a, int b, int c)
	{
		s = a;
		e = b;
		val = c;
	}
};

int main()
{
	int n, m;
	cin >> n >> m;

	vector <Edge> Ed;

	for (int i = 1; i <= m; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		Ed.push_back(Edge(a, b, c));
	}

	int s, e;
	cin >> s >> e;

	vector <int> dist(101);

	for (int i = 1; i <= n; i++)
	{
		dist[i] = numeric_limits<int>::max();
	}

	dist[s] = 0;

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j <= Ed.size(); j++)
		{
			int u = Ed[j].s;
			int v = Ed[j].e;
			int w = Ed[j].val;

			if (dist[u] != numeric_limits<int>::max() && dist[u] + w < dist[v])
			{
				dist[v] = dist[u] + w;
			}
		}
	}

	for (int j = 0; j <= Ed.size(); j++)
	{
		int u = Ed[j].s;
		int v = Ed[j].e;
		int w = Ed[j].val;

		if (dist[u] != numeric_limits<int>::max() && dist[u] + w < dist[v])
		{
			cout << -1;
			exit(0);
		}
	}

	cout << dist[e];

	return 0;
}