#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, m;

	cin >> n >> m;

	vector <int> quiz(n + 1);
	vector <int> time(n + 1);

	vector <int> dy(m + 1);

	for (int i = 1; i <= n; i++)
	{
		cin >> quiz[i] >> time[i];
	}


	for (int i = 1; i <= n; i++)
	{
		for (int j = m; j >= time[i]; j--)
		{
			dy[j] = max(dy[j], dy[j - time[i]] + quiz[i]);
		}
		
	}

	cout << dy[m];

	return 0;
}