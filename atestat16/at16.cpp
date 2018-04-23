#include<iostream>
#include<fstream>
#include<math.h>
using namespace std;
short imp(short a[17][17], short n)
{
	int s=0;
	for(int i=n;i>=2;i--)
		for(int j=n;j>n-i+1;j--)
		{
				s+=a[i][j];
				//cout<<"\n"<<a[i][j];}
		}
	cout<<"\n\n"<<s;
}
int main()
{
	ifstream f("at.in");
	ofstream g("at.out");
	short a[17][17],n;
	f>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		{
			f>>a[i][j];
			if(j==i)
				cout<<a[i][j]<<" ";
		}
	imp(a,n);
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		{
			for(int u=1;u<=sqrt(a[i][j]);u++)
				if(u*u==a[i][j])
					g<<a[i][j]<<" ";
		}
}
