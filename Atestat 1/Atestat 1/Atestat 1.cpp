// Atestat 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;


//b)
void NrPare(int a[31], int n)
{
	int i, nr=0, b[31];

	for (i = 1; i <= n; i++)
	{
		b[i] = a[i];
	}

	for (i = 1; i <= n; i++)
	{
		nr = 0;
		while (b[i] != 0)
		{
			if (b[i] % 2 == 0)
				nr++;
			b[i] = b[i] / 10;
		}
		cout << nr << ' ';
	}



}

int main()
{int n, p, k, i, a[31];

ifstream f("atestat.in"); ofstream g("atestat.out");

//a)

	f >> n >> p >> k;

	for (i = 1; i <= n; i++)
	{
		f>> a[i];

		if (a[i] % p == k)
			cout << a[i] << ' ';
	}
	cout << endl;

	// b)

	NrPare(a, n);

	//c)
	cout << endl;
	k = 0; //k si p sunt refolosite
	int j=0, x=0;

	for (i = 1; i <= n; i++)
	{
		j = 0;
		for (p = i+1; p <= n; p++)
		{
			if (a[i] == a[p])
				j++;
		}
		if (j != 0)
		{
			g << "ELEMENTELE NU SUNT DISTINCTE!";
			break;
		}
		else
			x++;
	}

	if (x != 0)
		g << "ELEMENTELE SUNT DISTINCTE!";
	

    return 0;
}

