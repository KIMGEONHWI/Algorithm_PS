#include <iostream>
#include <vector>
using namespace std;

int n, cnt = 0;
vector <int> vec[30];
vector <int> ch(30);

void dfs(int L)
{
	if (L == n)
	{
		cnt++;
	}
	else
	{
		for (int i = 0; i < vec[L].size(); i++)
		{
			if (ch[L] == 0)
			{
				ch[L] = 1;
				dfs(vec[L][i]);
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
		int a, b;
		cin >> a >> b;

		vec[a].push_back(b);
	}

	dfs(1);

	cout << cnt; 

	return 0;
}