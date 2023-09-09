#include <iostream>
#include <vector>
using namespace std;

vector <int> push(int n, vector <int> vec)
{
	for (int i = 0; i < n; i++)
	{
		int push;
		cin >> push;
		vec.push_back(push);
	}

	return vec;
}

int main()
{
	int n;
	cin >> n;
	vector <int> vec1;

	vec1 = push(n, vec1);

	int m;
	cin >> m;
	vector <int> vec2;

	vec2 = push(m, vec2);

	vector <int> vec3;

	int p1 = 0;
	int p2 = 0;

	while (1)
	{
		if (vec1[p1] < vec2[p2])
		{
			vec3.push_back(vec1[p1]);
			p1++;
		}
		else
		{
			vec3.push_back(vec2[p2]);
			p2++;
		}

		if (p1 == n || p2 == m)
		{
			break;
		}
	}

	if (n < m)
	{
		while (p2 != m)
		{
			vec3.push_back(vec2[p2]);
			p2++;
		}
	}
	else if(n > m)
	{
		while (p1 != n)
		{
			vec3.push_back(vec1[p1]);
			p1++;
		}
	}
	

	for (int i = 0; i < vec3.size(); i++)
	{
		cout << vec3[i] << " ";
	}
	return 0;
}