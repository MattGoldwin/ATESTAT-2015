// Atestat 10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;

void nrc(int n, int a[21])
{
	int i = 0, p = 0, j, nr;

	for(j=1; j<=n; j++)
	{
		i = 0;
		p = 0;
		nr = a[j];
		while(nr!=0)
		{
			if ((nr % 10) % 2 == 0)
				p++;
			else
				i++;

			nr /= 10;
		}
		if (i == p)
			cout << 1 << ' ';
		else
			cout << 0 << ' ';
	}

}

int main()
{
	ifstream f("atestat.in"); ofstream g("atestat.out");

	int n, i, a[21];
//a)
	f >> n;
	for(i=1; i<=n; i++)
	{
		f >> a[i];

		if (a[i] % 5 == 0)
			cout << a[i] << ' ';
	}
	cout << endl;
	//b)

	nrc(n, a);
	cout << endl;

	//c)
	int min = 10000;
	for(i=1; i<=n; i++)
	{
		if (a[i] < min)
			min = a[i];
	}
	for (i = 1; i <= n; i++)
	{
		if(a[i]==min)
		{
			cout << min<<' '<<i;
			break;
		}
	}

    return 0;
}

