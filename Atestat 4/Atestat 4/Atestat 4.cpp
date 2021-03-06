// Atestat 4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>


using namespace std;
//b)
void minmax(int a[31], int n)
{
	int i, min=10000, max=0;

	for (i = 1; i <= n; i++)
	{
		if (a[i] > max)
			max = a[i];
		if (a[i] < min)
			min = a[i];
	}

	for (i = 1; i <= n; i++)
	{
		if (a[i] != min && a[i] != max)
			cout << a[i]<<' ';
		if (a[i] == min)
			cout << max<<' ';
		if (a[i] == max)
			cout << min<<' ';
	}

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

		if (a[i] % 2 != 0 && i % 2 == 0)
			cout << a[i] << ' ';

	}
	cout << endl;
	//b)
	minmax(a, n);
	cout << endl;

	//c)
	int x, S = 0;
	for (i = 1; i <= n; i++)
	{
		x = a[i];
		while (x != 0)
		{
			S = S + x % 10;
			x /= 10;
		}

		while (S != 0)
		{
			x = x + S % 10;
			S /= 10;
		}

		g << x << ' ';

	}


	
    return 0;
}

