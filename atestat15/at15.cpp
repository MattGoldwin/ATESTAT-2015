#include<iostream>
#include<fstream>
#include<math.h>
using namespace std;
double ma(double a[17][17],short m, short n)
{
	double s=0;
	short nr=0;
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
			{double c=int(a[i][j]*100)/100.+0.01,v=int(a[i][j]*100)/100.;
			if(a[i][j]==c||a[i][j]==v)
			{
				//cout<<v<<" "<<c<<"\n";
				s+=a[i][j];
				nr++;
			}}
	cout<<endl<<s/nr;
}
int main()
{
	ifstream f("at.in");
	ofstream g("at.out");
	double a[17][17];
	short n,m;
	f>>m>>n;
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
		{
			f>>a[i][j];
			if(i==m-1)
				cout<<int(a[i][j]*100)/100.<<" ";//doar 2 zecimale
		}
	cout<<endl;
	ma(a,m,n);
	double max=a[1][1],min=a[1][1];
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]>max)
				max=a[i][j];
			if(a[i][j]<min)
				min=a[i][j];
		}
	g<<int(max)+int(min);
}
