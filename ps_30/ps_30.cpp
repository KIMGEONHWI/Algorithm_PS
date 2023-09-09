#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector <int> num;
	int sc = 0;
	int sc_i = n;

	while (sc_i > 10)
	{
		sc++;
		num.push_back(sc_i % 10);
		sc_i /= 10;
	}

	num.push_back(sc_i);

	int sum = 1;
	int plus = 1;
	vector <int> vec(1);

	for (int i = 0; i < sc; i++)
	{
		vec.push_back(sum);
		sum = sum * 10;
		plus *= 10;
		sum += plus;
	}

	int cnt = 0;
	int ten_cnt = 0;

	for (int i = sc; i >= 0; i--)
	{
		if (num[i] < 3)
		{
			cnt += (vec[i] * num[i]) + (pow(10, i) * ten_cnt * num[i]);
		}
		else if(num[i] == 3)
		{
			cnt += (vec[i] * num[i]) + (pow(10, i) * ten_cnt * num[i]) + 1;
			ten_cnt++;
		}
		else
		{
			cnt += (vec[i] * num[i]) + pow(10, i) + (pow(10, i) * ten_cnt * num[i]);
		}
	}

	cout << cnt;

	return 0;
}