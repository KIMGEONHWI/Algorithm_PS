#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
vector <int> ch(10001);
vector <int > d{ 1, -1, 5 };

int main()
{
	int s, e;

	cin >> s >> e;

	queue <int> q;

	q.push(s);
	ch[s] = 1;

	while (!q.empty())
	{
		int x = q.front();
		q.pop();

		for (int i = 0; i < d.size(); i++)
		{
			if(x + d[i] <= 0 || x + d[i] > 10000)
			{
				continue;
			}
			if (x + d[i] == e)
			{
				cout << ch[x];
				exit(0);
			}
			if (ch[x + d[i]] == 0)
			{
				ch[x + d[i]] = ch[x] + 1;
				q.push(x + d[i]);
			}
		}
	}

	return 0;
}