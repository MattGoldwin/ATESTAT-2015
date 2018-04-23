#include<iostream>
#include<fstream>
using namespace std;
int digs(int a[17][17],int n)
{
	int nr=0;
	for(int i=1;i<=n-1;i++)
		for(int j=1;j<n-i+1;j++)
			if(a[i][j]%2==0)
				nr++;
	cout<<nr;
}
int main()
{
	ifstream f("at.in");
	ofstream g("at.out");
	int a[17][17],n;
	f>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		{
			f>>a[i][j];
			if(j==n)
				cout<<a[i][j]<<" ";
		}
	cout<<endl;
	digs(a,n);
	for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				int s=0;
				while(a[i][j]!=0)
				{
					s+=a[i][j]%10;
					a[i][j]/=10;
				}
				a[i][j]=s;
				g<<a[i][j]<<" ";
			}
		g<<endl;}
}