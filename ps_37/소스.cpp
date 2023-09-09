#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int s, n;
	cin >> s >> n;

	vector <int> cac(s);
	vector <int> vec;
	

	for (int i = 0; i < n; i++)
	{
		int push;
		cin >> push;
		vec.push_back(push);
	}

	for (int i = 0; i < n; i++)
	{
		bool b = false;
		int idx = 0;

		for (int j = 0; j < s; j++)
		{
			if (vec[i] == cac[j])
			{
				b = true;
				idx = j;
				break;
			}
		}

		if (b == true)
		{
			for (int j = idx - 1; j >= 0; j--)
			{
				cac[j + 1] = cac[j];
			}
		}
		else
		{
			for (int j = s - 2; j >= 0; j--)
			{
				cac[j + 1] = cac[j];
			}
		}

		cac[0] = vec[i];
	}

	for (int i = 0; i < cac.size(); i++)
	{
		cout << cac[i] << " ";
	}

	return 0;
}