#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

vector <int> dis(30);
vector <int> ch(30);

int main()
{

	int n, m;
	cin >> n >> m;

	vector <int> map[30];

	for (int i = 1; i <= m; i++)
	{
		int a, b;
		cin >> a >> b;
		map[a].push_back(b);
	}

	queue <int> q;

	q.push(1);
	ch[1] = 1;

	while (!q.empty())
	{
		int x = q.front();
		q.pop();

		for (int i = 0; i < map[x].size(); i++)
		{
			if (ch[map[x][i]] == 0)
			{
				ch[map[x][i]] = 1;
				q.push(map[x][i]);
				dis[map[x][i]] = dis[x] + 1;
			}
		}
	}

	for (int i = 2; i <= n; i++)
	{
		cout << i << " : " << dis[i] << endl;
	}


	return 0;
}