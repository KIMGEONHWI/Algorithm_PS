#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector <int> vec;
	vector <int> res;

	for (int i = 0; i < n; i++)
	{
		int push;
		cin >> push;
		vec.push_back(push);
	}

	for (int i = 0; i < n - 1; i++)
	{
		int cha = vec[i] - vec[i + 1];

		if (cha < 0)
		{
			cha = 0 - cha;
		}

		res.push_back(cha);

	}

	sort(res.begin(), res.end());

	bool b = true;

	for (int i = 1; i < n; i++)
	{
		if (res[i - 1] == i)
		{
			b = true;
		}
		else
		{
			b = false;
			break;
		}
	}

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