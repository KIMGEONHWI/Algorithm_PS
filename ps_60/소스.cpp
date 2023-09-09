#include <iostream>
#include <vector>
using namespace std;

int n;
vector <int> vec(11);
vector <int> ch(11);
vector <int> vec_sum;
bool b = false;

void dfs(int L)
{
	if (b == true)
	{
		return;
	}
	
	if (L == n + 1)
	{
		int sum1 = 0;
		int sum2 = 0;

		for (int i = 1; i <= n; i++)
		{
			if (ch[i] == 1)
			{
				sum1 += vec[i];
			}
			else
			{
				sum2 += vec[i];
			}
		}

		if (sum1 == sum2)
		{
			b = true;
		}
	}
	else
	{
		ch[L] = 1;
		dfs(L + 1);
		ch[L] = 0;
		dfs(L + 1);
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
	}

	dfs(1);

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