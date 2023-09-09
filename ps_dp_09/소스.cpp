#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	int weight_max;

	cin >> n;
	cin >> weight_max;

	vector <int> weight(n + 1);
	vector <int> value(n + 1);

	vector <int> dy(weight_max + 1);

	for (int i = 1; i <= n; i++)
	{
		cin >> weight[i];
		cin >> value[i];
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = weight[i]; j <= weight_max; j++)
		{
			dy[j] = max(dy[j], dy[j - weight[i]] + value[i]);
		}
	}

	cout << dy[weight_max];

	return 0;
}