#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> vec(101);
vector <int> tmp(101);

void divide(int lt, int rt)
{
	int mid;
	int p1, p2, p3;

	if (lt < rt)
	{
		mid = (lt + rt) / 2;
		divide(lt, mid);
		divide(mid + 1, rt);

		p1 = lt;
		p2 = mid + 1;
		p3 = lt;

		while (p1 <= mid && p2 <= rt)
		{
			if (vec[p1] < vec[p2])
			{
				tmp[p3++] = vec[p1++];
			}
			else
			{
				tmp[p3++] = vec[p2++];
			}
		}
		while (p1 <= mid) tmp[p3++] = vec[p1++];
		while (p2 <= rt) tmp[p3++] = vec[p2++];

		for (int i = lt; i <= rt; i++)
		{
			vec[i] = tmp[i];
		}
	}
}
int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		int push;
		cin >> push;
		vec[i] = push;
	}

	divide(1, n);

	for (int i = 1; i <= n; i++)
	{
		cout << vec[i] << " ";
	}

	return 0;
}