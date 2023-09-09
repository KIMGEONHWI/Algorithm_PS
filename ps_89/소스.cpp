#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

vector <int> dx = { -1, 1, 0, 0 };
vector <int> dy = { 0, 0, -1, 1 };

struct Loc
{
	int x;
	int y;

	Loc(int a, int b)
	{
		x = a;
		y = b;
	}
};

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> m >> n;

	vector <int> vec1(m + 2, -1);
	vector <vector <int>> vec(n + 2, vec1);

	vector <vector <int>> cnt(n + 2, vec1);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			int push;
			cin >> push;
			vec[i][j] = push;
		}
	}

	queue<Loc> Q;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (vec[i][j] == 1)
			{
				Q.push(Loc(i, j));
				cnt[i][j] = 0;
			}
		}
	}

	while(!Q.empty())
	{
		Loc temp = Q.front();
		Q.pop();

		for (int i = 0; i < 4; i++)
		{
			int temp_x = temp.x + dx[i];
			int temp_y = temp.y + dy[i];

			if (vec[temp_x][temp_y] == 0)
			{
				cnt[temp_x][temp_y] = cnt[temp.x][temp.y] + 1;
				vec[temp_x][temp_y] = 1;
				Q.push(Loc(temp_x, temp_y));
			}
		}
	}

	bool b = false;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (vec[i][j] == 0)
			{
				cout << "-1";
				b = true;
				break;
			}
		}

		if (b == true)
		{
			break;
		}
	}

	if (b == false)
	{
		int max = -987654321;

		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				if (cnt[i][j] > max)
				{
					max = cnt[i][j];
				}
			}
		}
		cout << max;
	}

	return 0;
}