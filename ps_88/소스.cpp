#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

vector <int> vec1(9, 1);
vector <int> vec2(9, 0);
vector <vector <int>> map(9, vec1);
vector <vector <int>> dis(9, vec2);

vector <int> dx = { 0, 0, -1, 1 };
vector <int> dy = { -1, 1, 0, 0 };

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

	for (int i = 1; i <= 7; i++)
	{
		for (int j = 1; j <= 7; j++)
		{
			int push;
			cin >> push;
			map[i][j] = push;
		}
	}

	queue <Loc> Q;
	Q.push(Loc(1, 1));
	map[1][1] = 1;

	while(!Q.empty())
	{
		Loc temp = Q.front();

		Q.pop();

		for (int i = 0; i < 4; i++)
		{
			int temp_x = temp.x + dx[i];
			int temp_y = temp.y + dy[i];

			if (map[temp_x][temp_y] == 0)
			{
				map[temp_x][temp_y] = 1;
				dis[temp_x][temp_y] = dis[temp.x][temp.y] + 1;
				Q.push(Loc(temp_x, temp_y));
			}
		}
	}

	cout << dis[7][7];

	return 0;
}