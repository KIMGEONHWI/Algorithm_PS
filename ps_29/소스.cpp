#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int cnt = 0;

	for (int i = 1; i <= n; i++)
	{
		int j = i;

		while (j != 0)
		{
			if (j % 10 == 3)
			{
				cnt++;
			}
			j /= 10;
		}
	}

	cout << cnt;

	return 0;
}