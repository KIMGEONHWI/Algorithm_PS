#include <iostream>
#include <vector>
using namespace std;

int n, total = 0;
vector <int> vec(11);
bool b = false;

void dfs(int L, int sum)
{
	if (b == true)
	{
		return;
	}

	if (L == n + 1)
	{
		if (sum == (total - sum))
		{
			b = true;
		}
	}
	else
	{
		dfs(L + 1, sum + vec[L]);
		dfs(L + 1, sum);
	}
}

int main()
{
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		int push;
		cin >> push;
		vec[i] = push;
		total += push;
	}

	dfs(1, 0);

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