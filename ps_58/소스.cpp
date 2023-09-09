#include <iostream>
using namespace std;

void dfs(int v)
{
	if (v > 7)
	{
		return;
	}

	cout << v ;
	dfs(v * 2);
	dfs(v * 2 + 1);
}

int main()
{
	dfs(1);

	return 0;
}