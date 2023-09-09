#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector <bool> vec(n + 1, true);

	for (int i = 2; i * i <= n; i++)
	{
		if (vec[i])
		{
			for (int j = i * i; j <= n; j += i)
			{
				vec[j] = false;
			}
		}
	}

	int count = 0;

	for (int i = 2; i <= n; i++)
	{
		if(vec[i] == true)
			count++;
	}

	cout << count;

	return 0;
}