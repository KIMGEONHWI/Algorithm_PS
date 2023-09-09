#include <iostream>
#include <string>
using namespace std;

int main()
{
	string num;
	cin >> num;

	int age = 0;

	if (num[7] == '1' || num[7] == '3')
	{
		if (num[7] == '1')
		{
			age = 119 - ((num[0] - '0') * 10 + (num[1] - '0')) + 1;
			cout << age << " ";
		}
		else
		{
			age = 19 - ((num[0] - '0') * 10 + (num[1] - '0')) + 1;
			cout << age << " ";
		}

		cout << "M";
	}
	else if (num[7] == '2' || num[7] == '4')
	{
		if (num[7] == '2')
		{
			age = 119 - ((num[0] - '0') * 10 + (num[1] - '0')) + 1;
			cout << age << " ";
		}
		else
		{
			age = 19 - ((num[0] - '0') * 10 + (num[1] - '0')) + 1;
			cout << age << " ";
		}

		cout << "W";
	}

	return 0;
}