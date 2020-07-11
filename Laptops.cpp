#include<iostream>
using namespace std;
int main()
{
	int n, a[100000][2], c = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < 2; k++)
		{
			cin >> a[i][k];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i][0] < a[j][0])
			{
				if (a[i][1] > a[j][1])
				{
					c++;
					break;
				}
			}
			if (a[i][0] > a[j][0])
			{
				if (a[i][1] < a[j][1])
				{
					c++;
					break;
				}
			}
			if (a[i][0] == a[i][1])
			{
				if (a[i][0] > a[j][0] && a[i][1] <= a[j][1])
				{
					c++;
					break;
				}
				if (a[i][0] < a[j][0] && a[i][1] >= a[j][1])
				{
					c++;
					break;
				}
				break;
			}

		}
	}
	if (c > 0)
	{
		cout << "Happy Alex" << endl;
	}
	else
	{
		cout << "Poor Alex" << endl;
	}
	return 0;
}