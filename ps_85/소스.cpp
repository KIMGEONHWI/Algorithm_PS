#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n;
int maxi = -987654321;
int mini = 987654321;

vector <int> vec;
vector <int> ope;

void dfs(int L, int sum)
{
	if (L == n)
	{
		if (sum > maxi)
		{
			maxi = sum;
		}
		if (sum < mini)
		{
			mini = sum;
		}
	}
	else
	{
		for (int i = 0; i < 4; i++)
		{
			if (ope[i] > 0)
			{
				ope[i]--;

				if (i == 0)
				{
					dfs(L + 1, sum + vec[L]);
				}
				else if (i == 1)
				{
					dfs(L + 1, sum - vec[L]);
				}
				else if (i == 2)
				{
					dfs(L + 1, sum * vec[L]);
				}
				else
				{
					dfs(L + 1, sum / vec[L]);
				}

				ope[i]++;
			}
		}

	}
}

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int push;
		cin >> push;
		vec.push_back(push);
	}

	for (int i = 0; i < 4; i++)
	{
		int push;
		cin >> push;
		ope.push_back(push);
	}

	dfs(1, vec[0]);

	cout << maxi << endl << mini;

	return 0;
}