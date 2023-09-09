#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, m;
	vector <int> vec_n, vec_m, vec_r;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int push;
		cin >> push;
		vec_n.push_back(push);
	}

	cin >> m;

	for (int i = 0; i < m; i++)
	{
		int push;
		cin >> push;
		vec_m.push_back(push);
	}

	vec_r = vec_n;

	vec_r.insert(vec_r.end(), vec_m.begin(), vec_m.end());

	for (int i = vec_n.size(); i < vec_r.size(); i++)
	{
		for (int j = i; j > 0; j--)
		{
			if (vec_r[j - 1] > vec_r[j])
			{
				int temp = 0;
				temp = vec_r[j];
				vec_r[j] = vec_r[j - 1];
				vec_r[j - 1] = temp;
			}
		}
	}

	for (int i = 0; i < vec_r.size(); i++)
	{
		cout << vec_r[i] << " ";
	}

	return 0;
}