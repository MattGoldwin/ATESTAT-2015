#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;


//b)
void min(int a[31], int n)
{
	int i, min=10000;

	for (i = 1; i <= n; i++)
	{
		if (a[i] < min)
			min = a[i];
	}


	for (i = 1; i <= n; i++)
	{
		if (a[i] == min)
		{
			cout << i;
			break;
		}
	}

}

int main()
{
	ifstream f("atestat.in"); ofstream g("atestat.out");
	int n, i, a[31], x;

	//a)

	f >> n;

	for (i = 1; i <= n; i++)
	{
		f >> a[i];

		if (a[i] % 10 == 0)
			cout << 0 << ' ';
		else
		{
			x = a[i] / 10;
			cout << x % 10<<' ';
		}
	}
	cout << endl;

	//b)

	min(a, n);
	cout << endl;

	//c)
	bool prime = true;

	for (i = 1; i <= n; i++)
	{
		if (a[i] >= 100 && a[i] <= 999 && a[i] % 2 != 0)
		{
			prime = true;
			for (x = 2; x < a[i]; x++)
			{
				if (a[i] % x == 0)
				{
					prime = false;
					break;
				}
			}

			if (prime == true)
				g << a[i] << ' ';
		}

	}
    return 0;
}

