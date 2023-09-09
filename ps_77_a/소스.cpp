#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <int> unf(1001);

int Find(int v)
{
	if (v == unf[v])
	{
		return v;
	}
	else
	{
		return unf[v] = Find(unf[v]);
	}
}

void Union(int a, int b)
{
	a = Find(a);
	b = Find(b);

	if (a != b)
	{
		unf[a] = b;
	}
}
int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		unf[i] = i;
	}

	for (int i = 1; i <= m; i++)
	{
		int a, b;
		cin >> a >> b;
		Union(a, b);
	}

	int x, y;
	cin >> x >> y;
	if (Find(x) == Find(y))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

	return 0;
}