#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	vector <int> vec(n + 1);

	int pos = 0, cnt = 0, cir = 0;

	while (cnt < n - 1)
	{
		pos++;

		if (pos > n)
		{
			pos = 1;
		}

		if (vec[pos] == 0)
		{
			cir++;

			if (cir == k)
			{
				vec[pos] = 1;
				cir = 0;
				cnt++;
			}
		}
	}

	for (int i = 1; i <= n; i++)
	{
		if (vec[i] == 0)
		{
			cout << i;
		}
	}

	return 0;
}