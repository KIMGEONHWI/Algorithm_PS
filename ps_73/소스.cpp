#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	priority_queue <int> q;

	while(1)
	{
		int n;
		cin >> n;

		if (n == 0)
		{
			if (q.empty())
			{
				cout << "-1\n";
			}
			else
			{
				cout << q.top() << "\n";
				q.pop();
			}
		}
		else if (n == -1)
		{
			break;
		}
		else
		{
			q.push(n);
		}

	}

	return 0;
}