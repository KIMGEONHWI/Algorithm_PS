#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector <pair<int, int> > vec;
vector <int> ch(3000);
int x, y;
bool b = false;

void dfs(int L)
{
	if (L == y)
	{
		b = true;
	}
	else
	{
		for (int i = 0; i < vec.size(); i++)
		{
			if (vec[i].first == L && ch[i] == 0)
			{
				ch[i] = 1;
				dfs(vec[i].second);
			}
			if (vec[i].second == L && ch[i] == 0)
			{
				ch[i] = 1;
				dfs(vec[i].first);
			}
		}
	}
}

int main()
{
	int n, m;
	cin >> n >> m;

	for (int i = 1; i <= m; i++)
	{
		int left, right;
		cin >> left >> right;

		pair <int, int> p;
		p.first = left;
		p.second = right;
		vec.push_back(p);
	}

	cin >> x >> y;
	dfs(x);

	if (b == true)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

	return 0;
}