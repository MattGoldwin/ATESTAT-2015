#include<iostream>
#include<fstream>
using namespace std;
float sort(float a[94],int n)
{
	float x;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		{
			if(a[j]<a[j+1])
			{
				x=a[j];
				a[j]=a[j+1];
				a[j+1]=x;
			}
		}
	for(int j=1;j<=n;j++)
		cout<<a[j]<<" ";
}
int main()
{
	ifstream f("at.in");
	ofstream g("at.out");
	float a[94];
	int n;
	f>>n;
	for(int i=1;i<=n;i++)
	{
		f>>a[i];
		if(a[i]<10.)
			cout<<a[i]-int(a[i])<<" ";
	}
	cout<<endl;
	sort(a,n);
	float s=0,nr=0;
	for(int i=1;i<=n;i++)
	{
		if(a[i]<10)
		{
			s+=a[i];
			nr++;
		}
	}
	g<<int(s/nr*1000)/1000.;
}
