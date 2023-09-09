#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	stack <char> s;
	string str;
	
	cin >> str;

	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == '(')
		{
			s.push(str[i]);
		}
		else
		{
			if (s.empty())
			{
				cout << "NO";
				return 0;
			}
			else
			{
				s.pop();
			}
		}
	}

	if (s.empty())
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

	return 0;
}