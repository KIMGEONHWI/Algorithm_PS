#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;

	vector <int> vec(10, 0);

	for (int i = 0; i < str.size(); i++)
	{
		vec[str[i] - '0']++;
	}

	int max = numeric_limits<int>::min();
	int res = 0;

	for (int i = 1; i < vec.size(); i++)
	{
		if (max <= vec[i])
		{
			max = vec[i];
			res = i;
		}
	}

	cout << res << endl;

	return 0;
}