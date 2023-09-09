#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

vector <int> dx = {-1, 0, 0, 1};
vector <int> dy = {0 , -1, 1, 0};

struct State	
{
	int x, y, dis;
	
	State(int a, int b, int c)
	{
		x = a;
		y = b;
		dis = c;
	}

	bool operator<(const State& b)const 
	{
		if (dis != b.dis)
		{
			return dis > b.dis;
		}
		if (x != b.x)
		{
			return x > b.x;
		}
		else
		{
			return y > b.y;
		}
	}
};

struct Lion
{
	int x, y, s, ate;

	void sizeUp()
	{
		ate = 0;
		s++;
	}
};

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	vector <vector <int>> vec(n + 2, vector <int> (n + 2, 99));
	vector <vector <int>> ch(n + 2, vector <int>(n + 2));

	priority_queue <State> Q;
	Lion simba;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			int push;
			cin >> push;
			vec[i][j] = push;

			if (push == 9)
			{
				vec[i][j] = 0;
				simba.x = i;
				simba.y = j;
			}
		}
	}

	Q.push(State(simba.x, simba.y, 0));
	simba.s = 2;
	simba.ate = 0;
	
	int res = 0;
	while (!Q.empty())
	{
		State temp = Q.top();
		Q.pop();

		int x = temp.x;
		int y = temp.y;
		int z = temp.dis;

		if (vec[x][y] != 0 && vec[x][y] < simba.s)
		{
			simba.x = x;
			simba.y = y;
			simba.ate++;

			if (simba.ate >= simba.s)
			{
				simba.sizeUp();
			}

			vec[x][y] = 0;

			for (int i = 1; i <= n; i++)
			{
				for (int j = 1; j <= n; j++)
				{
					ch[i][j] = 0;
				}
			}

			while (!Q.empty())
			{
				Q.pop();
			}

			res = z;
		}

		for (int i = 0; i < 4; i++)
		{
			int temp_x = x + dx[i];
			int temp_y = y + dy[i];

			if (vec[temp_x][temp_y] == 99 || ch[temp_x][temp_y] == 1 || vec[temp_x][temp_y] > simba.s)
			{
				continue;
			}

			Q.push(State(temp_x, temp_y, z + 1));
			ch[temp_x][temp_y] = 1;
		}
	}

	cout << res;

	return 0;
}