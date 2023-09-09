#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

struct Edge
{
	int e;
	int val;

	Edge(int a, int b)
	{
		e = a;
		val = b;
	}

	bool operator <(const Edge& b) const
	{
		return val > b.val;
	}
};

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	vector <pair<int, int>> map[30];

	for (int i = 1; i <= m; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		map[a].push_back(make_pair(b, c));
		map[b].push_back(make_pair(a, c));
	}

	vector <int> ch(30);
	priority_queue <Edge> q;

	q.push(Edge(1, 0));

	int sum = 0;

	while(!q.empty())
	{
		Edge tmp = q.top();
		q.pop();

		int v = tmp.e;
		int cost = tmp.val;

		if (ch[v] == 0)
		{
			sum += cost;
			ch[v] = 1;

			for (int i = 0; i < map[v].size(); i++)
			{
				q.push(Edge(map[v][i].first, map[v][i].second));
			}
		}
	}

	cout << sum;

	return 0;
}