#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector <int> vec;

	for (int i = 0; i < n; i++)
	{
		int push;
		cin >> push;
		vec.push_back(push);
	}

	vector <int> vec_ori = vec;

	sort(vec.begin(), vec.end(), greater<int>());

	vector <int> vec_rank(n);
	int rank = 1, cnt = 0;

	for (int i = 0; i < n; i += cnt)
	{
		cnt = 0;

		for (int j = 0; j < n; j++)
		{
			if (vec[i] == vec_ori[j])
			{
				vec_rank[j] = rank;
				cnt++;
			}
		}

		rank += cnt;
	}

	for (int i = 0; i < n; i++)
	{
		cout << vec_rank[i] << " ";
	}

	return 0;
}