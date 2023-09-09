#include <iostream>
#include <vector>
using namespace std;

int n;
int mini = numeric_limits<int>::max();

vector <int> vec1(30);
vector<vector <int> > vec(30, vec1);

vector <int> ch(30);

void dfs(int L, int sum)
{
	if (L == n)
	{
		if (sum < mini)
		{
			mini = sum;
		}
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			if ((vec[L][i]) > 0 && ch[L] == 0)
			{
				ch[L] = 1;
				dfs(i, sum + vec[L][i]);
				ch[L] = 0;
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
		int a, b, cost;

		cin >> a >> b >> cost;

		vec[a][b] = cost;

	}

	dfs(1, 0);

	cout << mini;

	return 0;
}