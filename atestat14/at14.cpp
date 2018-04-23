#include<iostream>
#include<fstream>
using namespace std;
int pozitiv(int a[17][17],int m,int n)
{
	int nr=0;
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
			if(a[i][j]>0)
				nr++;
	cout<<nr;
}
int main()
{
	ifstream f("at.in");
	ofstream g("at.out");
	int a[17][17],n,m;
	f>>m>>n;
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
		{
			f>>a[i][j];
			if(j==n-1)
				cout<<a[i][j]<<" ";
		}
	cout<<endl;
	pozitiv(a,m,n);
	int nou=0;
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]>0)
				nou+=a[i][j]%10;
			else
				nou+=(-a[i][j])%10;
		}
	g<<nou;
}