// Atestat 6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;

//b)
void rast(int a[101], int n)
{
	int i, b[9], j, x;

	for (i = 1; i <= n; i++)
	{
		if (a[i] % 2 != 0)
		{
			j = 1;
			x = a[i];
			while (x != 0)
			{
				b[j] = x % 10;
				x /= 10;
				j++;
			}
			for (x = 1; x <= j-1; x++)
			{
				cout << b[x];
			}
			cout <<' ';
		}
	}
		

}

int main()
{
	ifstream f("atestat.in"); ofstream g("atestat.out");

	int n, i, a[101], c;

	//a)
	f >> n >> c;

	for (i = 1; i <= n; i++)
	{
		f >> a[i];
		if (a[i] % 10 == c)
			cout << a[i] << ' ';
	}
	cout << endl;

	//b)
	rast(a, n);
	cout << endl;

	//c)
	int x, inv=0;

	for (i = 1; i <= n; i++)
	{
		inv = 0;
		x = a[i];
		while (x != 0)
		{
			inv = inv * 10 + x % 10;
			x /= 10;
		}
		if (a[i] == inv && a[i]<1000 && a[i]>99)
			g << a[i] << ' ';
	}

    return 0;
}

