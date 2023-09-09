#include <iostream>
#include <vector>
using namespace std;

int n, m, sum = 0;
vector <int> vec1(21);
vector <vector <int> > vec(21, vec1);
vector <int> ch(21);

void dfs(int L)
{
	if (L == n)
	{
		sum++;
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			if (vec[L][i] == 1 && ch[i] == 0)
			{
				ch[L] = 1;
				dfs(i);
				ch[L] = 0;
			}
		}
	}
}

int main()
{
	cin >> n >> m;

	for (int i = 1; i <= m; i++)
	{
		int x, y;

		cin >> x >> y;

		vec[x][y] = 1;
	}

	dfs(1);

	cout << sum;

	return 0;
}