#include<iostream>
#include<fstream>
#include<math.h>
using namespace std;
int ndiv(int n)
{
	int d=2;
		for(int j=2;j<=sqrt(n);j++)
			if(n%j==0)
				d++;
	return d;
}
int c[10];
int main()
{
	ifstream f("at.in");
	ofstream g("at.out");	
	int a[94],n;
	f>>n;
	for(int i=1;i<=n;i++)
	{
		f>>a[i];
		int x=a[i];
		while(x!=0)
		{
			c[x%10]++;
			x/=10;
		}
	}
	int max=c[0],j;
	for(int i=1;i<=9;i++)
	{
		if(c[i]>max)
			{max=c[i];
			j=i;}
	}
	cout<<j;
	max=0;
	for(int i=1;i<=n;i++)
		if(ndiv(a[i])>max)
			{max=ndiv(a[i]);
			j=a[i];}//pentru a afisa PRIMUL nr cu nr maxim de divizori proprii ar trebui facut inca un for
	cout<<endl<<j;
	for(int i=1;i<=n;i++)
			if(ndiv(a[i])==2)
				g<<a[i]<<" ";
}