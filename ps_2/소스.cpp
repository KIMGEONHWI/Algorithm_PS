#include <iostream>
using namespace std;

int main()
{
	int A, B, sum = 0;
	cin >> A >> B;

	for (int i = A; i <= B; i++)
	{
		sum += i;
		cout << i;

		if (i != B)
		{
			cout << " + ";
		}
		else
		{
			cout << " = " << sum;
		}
	}

	return 0;
}