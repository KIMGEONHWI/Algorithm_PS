#include <iostream>
#include <algorithm>
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
	sort(vec1.begin(), vec1.end());

	int m;
	cin >> m;
	vector <int> vec2;
	
	vec2 = push(m, vec2);
	sort(vec2.begin(), vec2.end());

	vector <int> vec3;
	int cnt = 0;

	int p1 = 0, p2 = 0;

	while (p1 < n && p2 < m)
	{
		if (vec1[p1] < vec2[p2])
		{
			p1++;
		}
		else if(vec1[p1] > vec2[p2])
		{
			p2++;
		}
		else
		{
			vec3.push_back(vec1[p1]);
			p1++;
			p2++;
		}
	}


	for (int i = 0; i < vec3.size(); i++)
	{
		cout << vec3[i] << " ";
	}

	return 0;
}