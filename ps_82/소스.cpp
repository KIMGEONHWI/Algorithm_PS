#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> vec;
vector <int> ch(30);
vector <int> v;
int r;
int cnt = 0;

void dfs(int L)
{
	if (L == r)
	{
		for (int i = 0; i < v.size(); i++)
		{
			cout << v[i] << " ";
		}

		cout << endl;

		cnt++;
	}
	else
	{
		for (int i = 0; i < vec.size(); i++)
		{
			if (ch[i] == 0)
			{
				ch[i] = 1;
				v.push_back(vec[i]);

				dfs(L + 1);

				ch[i] = 0;
				v.pop_back();
			}
		}
	}
}

int main()
{
	int n;
	cin >> n >> r;

	for (int i = 1; i <= n; i++)
	{
		int push;
		cin >> push;
		vec.push_back(push);
	}

	dfs(0);

	cout << cnt;

	return 0;
}