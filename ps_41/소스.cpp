#include <iostream>
#include <vector>
using namespace std;

void out(int sum, int i_, int j)
{
	for (int i = j; i <= i_; i++)
	{
		if (i == j)
		{
			cout << i;
		}
		else
		{
			cout << " + " << i;
		}
	}

	cout << " = " << sum;
	cout << endl;
}
int main()
{
	int n;
	cin >> n;
	int cnt = 0;

	for (int i = n; i >= 1; i--)
	{
		int temp = i;

		for (int j = i - 1; j >= 1; j--)
		{
			temp += j;

			if (temp == n)
			{
				out(n, i, j);
				cnt++;
				break;
			}

			if (temp > n)
			{
				break;
			}
		}
	}

	cout << cnt;

	return 0;
}