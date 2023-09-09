#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector <int> Q(10);
int front = -1, back = -1;
vector <int> ch(10);

vector <int> map[10];

int main()
{
	int a, b;

	for (int i = 1; i <= 6; i++)
	{
		cin >> a >> b;
		map[a].push_back(b);
		map[b].push_back(a);
	}

	Q[++back] = 1;
	ch[1] = 1;

	while(front < back)
	{
		int x = Q[++front];
		cout << x;

		for (int i = 0; i < map[x].size(); i++)
		{
			if (ch[map[x][i]] == 0)
			{
				ch[map[x][i]] = 1;
				Q[++back] = map[x][i];
			}
		}
	}
	

	return 0;
}