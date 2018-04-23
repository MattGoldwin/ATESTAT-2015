#include<iostream>
#include<fstream>
using namespace std;
short imp(short a[17][17], short n)
{
	int ko=0;
	for(int i=2;i<=n;i++)
		for(int j=1;j<i;j++)
		{
			if(a[i][j]%2!=0)
				ko++;
				//cout<<"\n"<<a[i][j];}
		}
	cout<<"\n\n"<<ko;
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
			if(j==n-i+1)
				cout<<a[i][j]<<" ";
		}
	imp(a,n);
	int s=0,p=2,e=0;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		{
			int x=a[i][j];
			while(x!=0)
			{
				s+=x%10;
				x/=10;
			}
			for(int u=2;u<=s/2;u++)
			{
				if(s%u==0)
					p++;
			}
			if(p==2)
				{g<<a[i][j]<<" ";e=1;}
			p=2;
			s=0;
		}
	if(e==0)
		g<<"NU EXISTA ASTFEL DE NUMERE";
}