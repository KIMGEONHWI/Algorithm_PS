#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	vector <int> vec(1);
	vec.push_back(1);

	int cnt = 1;
	int p2 = 1, p3 = 1, p5 = 1;
	int min = 0;

	while (cnt < n)
	{
		if (vec[p2] * 2 < vec[p3] * 3)
		{
			min = vec[p2] * 2;
		}
		else
		{
			min = vec[p3] * 3;
		}

		if (vec[p5] * 5 < min)
		{
			min = vec[p5] * 5;
		}

		if (vec[p2] * 2 == min)
		{
			p2++;
		}
		if (vec[p3] * 3 == min)
		{
			p3++;
		}
		if (vec[p5] * 5 == min)
		{
			p5++;
		}

		vec.push_back(min);
		cnt++;
	}

	cout << vec[n];

	return 0;
}