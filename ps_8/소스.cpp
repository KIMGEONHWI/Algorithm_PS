#include <iostream>
using namespace std;

int main()
{
	string str;
	cin >> str;

	int sum = 0;

	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == '(')
		{
			sum += 1;
		}
		else
		{
			sum -= 1;
		}

		if (sum < 0)
		{
			break;
		}
	}

	if (sum == 0)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

	return 0;
}