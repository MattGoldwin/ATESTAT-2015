// Atestat 11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;

void imp(int n, int a[21][21])
{
	int i, j, k=0;

	for(i=1; i<n; i++)
	{
		for(j=i+1; j<=n; j++)
		{
			if (a[i][j] % 2 != 0)
				k++;
		}
	}

	cout << k;
}

int main()
{
	ifstream f("atestat.in"); ofstream g("atestat.out");

	int n, i, j, a[21][21];

	//a)

	f >> n;

	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			f >> a[i][j];
		}
	}

		for (j = 1; j <= n; j++)
		{
			cout << a[n][j]<<' ';
		}

		cout << endl;
	//b) 
		imp(n, a);
		cout << endl;
	//c)
		int k=0, x=1;
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				for(x=1; x<=a[i][j]; x++)
				{
					if (a[i][j] % x == 0)
						k++;
				}
				a[i][j] = k;
				k = 0;
			}
		}

		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				cout << a[i][j] << ' ';
			}
			cout << endl;
		}

    return 0;
}

