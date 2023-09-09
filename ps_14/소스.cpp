#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int reverse(int x)
{
	vector <int> vec;

	while (x > 10)
	{
		vec.push_back(x % 10);
		x /= 10;
	}

	vec.push_back(x);

	int res = 0;

	for (int i = 0; i < vec.size(); i++)
	{
		res += vec[i] * pow(10, vec.size() - i - 1);
	}

	return res;
}

bool isPrime(int x)
{
	int cnt = 0;

	for (int i = 1; i <= x; i++)
	{
		if (x % i == 0)
		{
			cnt++;
		}
	}

	if (cnt == 2)
		return true;
	else
		return false;
}

int main()
{
	int n;
	cin >> n;

	vector <int> vec;

	for (int i = 0; i < n; i++)
	{
		int push;
		cin >> push;
		vec.push_back(push);
	}

	for (int i = 0; i < n; i++)
	{
		vec[i] = reverse(vec[i]);
	}

	for (int i = 0; i < n; i++)
	{
		if (isPrime(vec[i]) == true)
		{
			cout << vec[i] << " ";
		}
	}

	return 0;
}