#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;

int main()
{
	int n; 
	cin >> n;

	int num = 1;
	stack <int> s;
	string str;

	for (int i = 1; i <= n; i++)
	{
		int push;
		cin >> push;
		s.push(push);
		str.push_back('P');
		
		while (1)
		{
			if (s.size() != 0 && s.top() == num)
			{
				s.pop();
				str.push_back('O');
				num++;
			}
			else
			{
				break;
			}
		}
	}

	if (--num == n)
	{
		cout << str;
	}
	else
	{
		cout << "impossible";
	}

	return 0;
}