#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> unf(1001);

struct Edge 
{
	int v1;
	int v2;
	int val;

	Edge(int a, int b, int c)
	{
		v1 = a;
		v2 = b;
		val = c;
	}

	bool operator <(Edge& b)
	{
		return val < b.val;
	}
};

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

	vector <Edge> Ed;

	int v, e;
	cin >> v >> e;

	for (int i = 1; i <= v; i++)
	{
		unf[i] = i;
	}

	for (int i = 1; i <= e; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		Ed.push_back(Edge(a, b, c));
	}

	sort(Ed.begin(), Ed.end());

	int sum = 0;

	for (int i = 0; i < e; i++)
	{
		if (Find(Ed[i].v1) != Find(Ed[i].v2))
		{
			sum += Ed[i].val;
			Union(Ed[i].v1, Ed[i].v2);
		}
	}

	cout << sum;

	return 0;
}