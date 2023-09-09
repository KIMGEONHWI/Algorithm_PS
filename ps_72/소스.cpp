#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	queue <int> q;

	for (int i = 1; i <= n; i++)
	{
		q.push(i);
	}

	int cnt = 1;

	while(!(q.size() == 1))
	{
		if (cnt == k)
		{
			q.pop();
			cnt = 1;
		}
		else
		{
			int x = q.front();
			q.pop();
			q.push(x);
			cnt++;
		}		
	}

	cout << q.front() << endl;

	return 0;
}