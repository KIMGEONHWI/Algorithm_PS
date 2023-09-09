#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str, num;
	bool temp = false;

	cin >> str;

	for(int i = 0; i < str.size(); i++)
	{
		if (str[i] >= '1' && str[i] <= '9')
		{
			temp = true;
			num.push_back(str[i]);

		}
		else if (str[i] == '0' && temp == true)
		{
			num.push_back(str[i]);
		}
	}
	
	int n = stoi(num);
	int sum = 0;

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			sum++;
		}
	}

	cout << n << endl << sum;

	return 0;
}