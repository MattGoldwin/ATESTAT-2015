// Atestat 7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;
//b)
void uc(int a[101], int n)
{
	int i, x, t=1;

	for (i = 1; i < n; i++)
	{
		t = 1;
		x = a[i];
		while (x != 0)
		{
			x /= 10;
			t *= 10;
		}
		if (a[i] / (t / 10) == a[i] % 10)
			cout << a[i] << ' ';
		
	}

}

int main()
{
	ifstream f("atestat.in"); ofstream g("atestat.out");

	int i=1, a[101];
	//a)
	while (f >> a[i])
	{
		if (i % 2 != 0 && a[i] % 2 == 0)
		{
			cout << a[i]<<' ';
		}
		i++;
	}
	cout << endl;

	//b)

	uc(a, i);
	cout << endl;

	//c)
	int n;
	float min = 100000000, max = 0;
	n = i;
	for (i = 1; i < n; i++)
	{
		if (a[i] > max)
			max = a[i];
		if (a[i] < min)
			min = a[i];
	}

	g << (min + max) / 2;


    return 0;
}

