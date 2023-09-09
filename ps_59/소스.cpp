#include <iostream>
#include <vector>
using namespace std;

int n;	
vector <int> ch(11);

void dfs(int L)
{
	if (L == n + 1)
	{
		for (int i = 1; i <= n; i++)
		{
			if (ch[i] == 1)
			{
				cout << i;
			}
		}
		cout << endl;
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

	dfs(1);

	return 0;
}