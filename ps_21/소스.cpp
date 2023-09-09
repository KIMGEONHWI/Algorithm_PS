#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector <int> vecA, vecB;
	vector <char> win;

	for (int i = 0; i < 10; i++)
	{
		int push;
		cin >> push;
		vecA.push_back(push);
	}

	for (int i = 0; i < 10; i++)
	{
		int push;
		cin >> push;
		vecB.push_back(push);
	}

	int scA = 0, scB = 0;

	for (int i = 0; i < 10; i++)
	{
		if (vecA[i] > vecB[i])
		{
			scA += 3;
			win.push_back('A');
		}
		else if(vecA[i] < vecB[i])
		{
			scB += 3;
			win.push_back('B');
		}
		else
		{
			scA++;
			scB++;
			win.push_back('D');
		}
	}

	cout << scA << " " << scB << endl;

	if (scA < scB)
	{
		cout << 'A';
	}
	else if (scA > scB)
	{
		cout << 'B';
	}
	else
	{
		for (int i = 9; i >= 0; i--)
		{
			if (win[i] == 'A')
			{
				cout << 'A';
				break;
			}
			else if (win[i] == 'B')
			{
				cout << 'B';
				break;
			}

			if (i == 0)
			{
				cout << 'D';
				break;
			}
		}
	}

	return 0;
}