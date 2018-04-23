#include<iostream>
#include<fstream>
using namespace std;
char exista(int a[17][17],int m,int n,int k)
{
	int DA=0;
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]==k)
				DA=1;
		}
	if(DA==1)
		cout<<"DA";
	else
		cout<<"NU";
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
			if(a[i][j]%2!=0)
				cout<<a[i][j]<<" ";
		}
	cout<<endl;
	int k;
	cin>>k;
	exista(a,m,n,k);
	for(int i=1;i<=m;i++)
		{
			for(int j=1;j<=n;j++)
			{
				int p=1;
				while(a[i][j]!=0)
				{
					p*=a[i][j]%10;
					a[i][j]/=10;
				}
				a[i][j]=p;
				g<<a[i][j]<<" ";
			}
		g<<endl;}
}
