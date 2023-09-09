#include <iostream>
using namespace std;
int stack[100];
int top = -1;

void push(int i)
{
	stack[++top] = i;
}
int pop()
{
	return stack[top--];
}
int main()
{
	int n, k;
	cin >> n >> k;

	string str = "0123456789ABCDEF";

	while(n > 0)
	{
		push(n % k);
		n /= k;
	}

	while (top != -1)
	{
		cout << str[pop()];
	}

	return 0;
}