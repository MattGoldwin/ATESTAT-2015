// Atestat 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;

//b)
void desc(int a[31], int n)
{
	int i;
	bool des = true;

	for (i = 1; i <= n; i++)
	{
		if (a[i] < a[i + 1])
		{
			des = false;
			break;
		}
	}

	if (des == true)
		cout << "DA";
	else
		cout << "NU";

}


int main()
{
	ifstream f("atestat.in");  ofstream g("atestat.out");

	int n, i, a[31], sd=0, j;


	//a)
	f >> n;

	for (i = 1; i <= n; i++)
	{
		f >> a[i];
	}

	for (i = 1; i <= n; i++)
	{
		sd = 0;
		for (j = 1; j <= a[i]; j++)
		{
			if (a[i] % j == 0)
				sd = sd + j;
		}
		cout << sd << ' ';
	}

	cout << endl;
	//b)
	desc(a, n);
	cout << endl;


	//c)
	j = 0;
	for (i = 1; i <= n; i++)
	{
		if (a[i] == a[i + 1] * 2)
		{
			j++;
			g << a[i] << ' ' << a[i + 1] << endl;
		}
	}

	if (j == 0)
	{
		g << "NU EXISTA ASTFEL DE NUMERE";
	}

    return 0;
}

