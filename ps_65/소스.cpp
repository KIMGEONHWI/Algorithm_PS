#include <iostream>
#include <vector>
using namespace std;

vector <int> vec1(8);
vector <vector <int> > vec(8, vec1);

vector <int> ch1(8);
vector <vector <int> > ch(8, vec1);

int sum = 0;

void dfs(int x, int y)
{	
	if (x == 7 && y == 7)
	{
		sum++;
	}
	else
	{
		if ((x >= 1 && x <= 7) && (y >= 1 && y <= 7))
		{
			if (vec[x][y] == 0 && ch[x][y] == 0)
			{
				ch[x][y] = 1;
				dfs(x - 1, y);
				dfs(x + 1, y);
				dfs(x, y - 1);
				dfs(x, y + 1);
				ch[x][y] = 0;
			}
		}
	}
}
int main()
{
	for (int i = 1; i <= 7; i++)
	{
		for (int j = 1; j <= 7; j++)
		{
			int push;
			cin >> push;
			vec[i][j] = push;
		}
	}

	dfs(1, 1);

	cout << sum;

	return 0;
}