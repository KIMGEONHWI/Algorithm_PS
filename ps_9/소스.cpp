#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector <int> vec(n + 1);
	
	for (int i = 1; i <= n; i++)
	{
		vec[i] = 0;
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j <= n; j += i)
		{
			vec[j]++;
		}
	}

	for (int i = 1; i <= n; i++)
	{
		cout << vec[i] << " ";
	}

	return 0;
}