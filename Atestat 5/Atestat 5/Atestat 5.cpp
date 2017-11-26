// Atestat 5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;
//b)
void scmax(int a[31], int n)
{
	int i, max = 0;

	for (i = 1; i <= n; i++)
	{
		if (a[i] > max)
			max = a[i];
	}
	i = 0;
	while (max != 0)
	{
		i = i + max % 10;
		max /= 10;
	}

	cout << i;

}

int main()
{
	ifstream f("atestat.in"); ofstream g("atestat.out");
	int n, i, a[31];

	//a)
	f >> n;

	for (i = 1; i <= n; i++)
	{
		f >> a[i];

		if (a[i] % 3 == 0 && a[i] % 2 != 0)
		{
			cout << a[i] << ' ';
		}

	}
	cout << endl;
	//b)

	scmax(a, n);
	cout << endl;

	//c)

	int b[5], j, y;
	bool ok = true;

	for (i = 1; i <= n; i++)
	{
		ok = true;
		j = 0;
		y = a[i];
		while (y != 0)
		{
			b[j] = y % 10;
			y /= 10;
			j++;
		}

		for (y = j -1; y >= 0; y--)
		{
			if (b[y] <= b[y + 1])
			{
				ok = false;
			}
		}
		if (ok == true)
			g << a[i] << ' ';

	}

    return 0;
}

