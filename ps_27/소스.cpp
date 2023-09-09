#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector <int> vec_so;
	vector <int> vec_na;

	vec_so.push_back(2);

	for (int i = 3; i <= n; i++)
	{
		bool b = true;

		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				b = false;
				break;
			}
		}

		if (b == true)
		{
			vec_so.push_back(i);
		}
	}

	vector <int> itr(vec_so.size());

	for (int i = 0; i < n; i++)
	{
		vec_na.push_back(i + 1);
	}

	for (int i = 0; i < n; i++)
	{
		while (vec_na[i] != 1)
		{
			for (int j = 0; j < vec_so.size(); j++)
			{
				if (vec_na[i] % vec_so[j] == 0)
				{
					vec_na[i] /= vec_so[j];
					itr[j]++;
				}
			}
		}
	}

	cout << n << "! = ";

	for (int i = 0; i < itr.size(); i++)
	{
		cout << itr[i] << " ";
	}

	return 0;
}