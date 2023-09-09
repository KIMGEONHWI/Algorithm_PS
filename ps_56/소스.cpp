#include <iostream>
using namespace std;

void ref(int n)
{
	if (n == 0)
	{
		return;
	}
	ref(n - 1);
	cout << n << " ";
}

int main()
{
	int n;
	cin >> n;
	ref(n);
	
	return 0;
}