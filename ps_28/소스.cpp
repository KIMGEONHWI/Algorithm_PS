#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int cnt = 0;

	for (int i = 1; i <= n; i++)
	{
		if (i % 5 == 0)
		{
			int j = i;

			while (j % 5 == 0)
			{
				j /= 5;
				cnt++;
			}
		}
	}

	cout << cnt;

	return 0;
}