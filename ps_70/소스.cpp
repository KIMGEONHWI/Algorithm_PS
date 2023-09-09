#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
vector <int> vec[30];
vector <int> ch(30);
vector <int> mini;

void bfs(int L, int fin, int cnt)
{
	if (L == fin)
	{
		mini.push_back(cnt);
	}
	else
	{
		for (int i = 0; i < vec[L].size(); i++)
		{
			if (ch[vec[L][i]] == 0)
			{
				ch[vec[L][i]] = 1;
				bfs(vec[L][i], fin, cnt + 1);
				ch[vec[L][i]] = 0;
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
		int x, y;

		cin >> x >> y;
		vec[x].push_back(y);
	}

	ch[1] = 1;


	for (int i = 2; i <= n; i++)
	{
		int min = numeric_limits<int>::max();
		mini.clear();
		bfs(1, i, 0);

		for (int i = 0; i < mini.size(); i++)
		{
			if (mini[i] < min)
			{
				min = mini[i];
			}
		}

		cout << i << " : " << min << endl;
	}

	return 0;
}