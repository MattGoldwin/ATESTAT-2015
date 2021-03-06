// Atestat 25.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;


struct coord {

	int x, y;

}a[11];
//b)
void cord(coord a[11], int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (a[i].x % 2 == 0 && a[i].y >= 0 && a[i].y > 0)
			cout <<'('<< a[i].x <<','<< a[i].y<<')';
	}

}

int main()
{
	ifstream f("atestat.in"); ofstream g("atestat.out");

	int n, i;
	//a)
	f >> n;

	for (i = 1; i <= n; i++)
	{
		f >> a[i].x >> a[i].y;
		if (a[i].x != a[i].y)
		{
			cout <<'('<< a[i].x << ',' << a[i].y <<')'<< endl;
		}
	}
	cout << endl;

	//b)
	cord(a, n);
	cout << endl;

	//c)
	double b[11], min=100000000, max=0;


	for (i = 1; i <= n; i++)
	{
		b[i] = sqrt(a[i].x*a[i].x + a[i].y*a[i].y);

		if (b[i] < min)
			min = b[i];

		if (b[i] > max)
			max = b[i];

	}

	for (i = 1; i <= n; i++)
	{
		if (sqrt(a[i].x*a[i].x + a[i].y*a[i].y) == max)
			cout << '(' << a[i].x << ',' << a[i].y << ')' << endl;
		
		if (sqrt(a[i].x*a[i].x + a[i].y*a[i].y) == min)
			cout << '(' << a[i].x << ',' << a[i].y << ')' << endl;
	}

    return 0;
}

