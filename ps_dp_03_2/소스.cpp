#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> vec(50);

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	vec[1] = 1;
	vec[2] = 2;

	for (int i = 3; i <= n + 1; i++)
	{
		vec[i] = vec[i - 1] + vec[i - 2];
	}

	cout << vec[n + 1];

	return 0;
}