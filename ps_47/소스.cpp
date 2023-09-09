#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;

	//vector <vector <int>> map(n + 2, vector <int>(n + 2)); 2차원 벡터 선언
	vector <int> vec1 (n + 2);

	vector <vector <int>> vec2;

	for (int i = 0; i < n + 2; i++)
	{
		vec2.push_back(vec1);
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			int push;
			cin >> push;
			vec2[i][j] = push;
		}
	}

	int pos = 0, cnt = 0;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			pos = vec2[i][j];
			if (pos > vec2[i - 1][j] && pos > vec2[i + 1][j] && pos > vec2[i][j - 1] && pos > vec2[i][j + 1])
			{
				cnt++;
			}
		}
	}

	cout << cnt;

	return 0;
}