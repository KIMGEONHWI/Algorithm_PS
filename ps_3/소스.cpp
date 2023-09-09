#include <iostream>
using namespace std;

int main()
{
	int N, i = 1, sum = 1;
	cin >> N;

	cout << i;

	for (int i = 2; i < N; i++)
	{
		if(N % i == 0)
		{
			sum += i;
			cout << " + " << i;
		}
	}

	cout << " = " << sum;

	return 0;
}