#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int dx[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };
int dy[8] = { -1, -1, 0, 1, 1, 1, 0, -1 };

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

	int n;
	cin >> n;

	vector <int> vec1(30);
	vector <vector <int>> vec(30, vec1);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			int push;
			cin >> push;

			vec[i][j] = push;
		}
	}
	
	int num = 0;

	queue <Loc> Q;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (vec[i][j] == 1)
			{
				Q.push(Loc(i, j));
				vec[i][j] = 0;

				while (!Q.empty())
				{
					Loc temp = Q.front();
					Q.pop();

					for (int i = 0; i < 8; i++)
					{
						int temp_x = temp.x + dx[i];
						int temp_y = temp.y + dy[i];

						if (vec[temp_x][temp_y] == 1)
						{
							vec[temp_x][temp_y] = 0;
							Q.push(Loc(temp_x, temp_y));
						}
					}
				}
				num++;
			}
		}
	}

	cout << num;

	return 0;
}