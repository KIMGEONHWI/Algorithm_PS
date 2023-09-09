#include <iostream>
#include <vector>
using namespace std;

vector <int> vec(50);

void fx(int n)
{
	vec[n] = vec[n - 1] + vec[n - 2];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	vec[1] = 1;
	vec[2] = 2;

	for (int i = 3; i <= n; i++)
	{
		fx(i);
	}

	cout << vec[n];

	return 0;
}