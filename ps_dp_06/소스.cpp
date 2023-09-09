#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

struct dol
{
	int s;
	int h;
	int w;

	dol(int a, int b, int c)
	{
		s = a;
		h = b;
		w = c;
	}

	bool operator < (const dol& b) const
	{
		return s > b.s;
	}
};

int main()
{
	int n;
	cin >> n;

	vector <int> dy(n + 1);

	vector <dol> vec;
	for (int i = 0; i < n; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;

		vec.push_back(dol(a, b, c));
	}

	sort(vec.begin(), vec.end());

	dy[0] = vec[0].h;

	for (int i = 1; i < n ; i++)
	{
		int max = 0;

		for (int j = i; j >= 0; j--)
		{
			if (max < dy[j] && vec[j].w > vec[i].w)
			{
				max = dy[j];
			}
		}

		dy[i] = max + vec[i].h;
	}

	int max = -987654321;

	for (int i = 1; i <= n; i++)
	{
		if (max < dy[i])
		{
			max = dy[i];
		}
	}

	cout << max;

	return 0;
}