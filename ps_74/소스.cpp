#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	priority_queue <int> q;

	while(1)
	{
		cin >> n;

		if (n == -1)
		{
			break;
		}
		else if (n == 0)
		{
			if (q.empty())
			{
				cout << "-1" << endl;
			}
			else
			{
				cout << -q.top() << endl;
				q.pop();
			}
		}
		else
		{
			q.push(-n);
		}
	}

	return 0;
}