#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	vector <int> vec1(n);
	vector <vector <int> > vec(n, vec1);

	for (int i = 0; i < m; i++)
	{
		int x, y, node;

		cin >> x >> y >> node;

		vec[x - 1][y - 1] = node;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << vec[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}