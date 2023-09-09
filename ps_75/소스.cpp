#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

struct str
{
	int money;
	int day;

	str(int a, int b)
	{
		money = a;
		day = b;
	}

	bool operator <(const str &s) const 
	{
		return day > s.day;
	}
};

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	vector <str> vec;

	for (int i = 1; i <= n; i++)
	{
		int m, d;
		cin >> m >> d;
		vec.push_back(str(m, d));
	}

	sort(vec.begin(), vec.end());

	priority_queue <int> que;
	int sum = 0;
	int j = 0;

	for (int i = vec[0].day; i >= 1; i--)
	{
		for (j; j < n; j++)
		{
			if (vec[j].day < i)
			{
				break;
			}
			que.push(vec[j].money);
		}

		if (!que.empty())
		{
			sum += que.top();
			que.pop();
		}
	}
	
	cout << sum;

	return 0;
}