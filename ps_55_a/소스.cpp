#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector <int> vec1(n + 1);
	for (int i = 1; i <= n; i++)
	{
		int push;
		cin >> push;
		vec1[i] = push;
	}

	string str;
	stack <int> s;
	int pos = 1;

	for (int i = 1; i <= n; i++)
	{
		s.push(vec1[i]);
		str.push_back('P');

		while (1)
		{
			if (s.size() != 0 && s.top() == pos)
			{
				s.pop();
				str.push_back('O');
				pos++;
			}
			else
			{
				break;
			}
		}
	}

	if (s.empty())
	{
		cout << str;
	}
	else
	{
		cout << "impossible";
	}

	return 0;
}