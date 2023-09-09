#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string s;
	cin >> s;
	s.push_back('O');

	int x = 1, y = 1;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'C')
		{
			if(s[i + 1] != 'H')
			{
				int j = i + 1;
				string s_x;

				while (s[j] != 'H')
				{
					s_x.push_back(s[j]);
					j++;
				}

				x = stoi(s_x);
			}
		}

		if (s[i] == 'H')
		{
			if(s[i + 1] != 'O')
			{
				int j = i + 1;
				string s_y;

				while (s[j] != 'O')
				{
					s_y.push_back(s[j]);
					j++;
				}

				y = stoi(s_y);
				break;
			}
		}
	}

	cout << (12 * x) + y;

	return 0;
}