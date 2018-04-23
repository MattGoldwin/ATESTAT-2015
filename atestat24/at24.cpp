#include<iostream>
#include<fstream>
using namespace std;
struct greutate
{
	int s,a;
}v[47];
int total(greutate v[47],int n)
{
	int b[47],c;
	for(int i=1;i<=n;i++)
	{
		b[i]=v[i].s+v[i].a;
	}
	for(int j=1;j<=n;j++)
		for(int i=1;i<=n;i++)
		{
			if(b[i]>b[i+1])
				{c=b[i];
				b[i]=b[i+1];
				b[i+1]=c;}
		}
	for(int i=n;i>=1;i--)
	{
		if(b[n]==v[i].s+v[i].a)
			cout<<"("<<v[i].s<<";"<<v[i].a<<")"<<endl;
		if(b[n-1]==v[i].s+v[i].a)
			cout<<"("<<v[i].s<<";"<<v[i].a<<")"<<endl;
		if(b[n-2]==v[i].s+v[i].a)
			cout<<"("<<v[i].s<<";"<<v[i].a<<")"<<endl;
		//cout<<b[i]<<" ";
	}
}
int main()
{
	ifstream f("at.in");
	ofstream g("at.out");
	int n;
	f>>n;
	for(int i=1;i<=n;i++)
	{
		f>>v[i].s>>v[i].a;
		if(v[i].s>=80&&v[i].a>=80)
			cout<<"("<<v[i].s<<";"<<v[i].a<<") ";
	}
	cout<<"\n\n";
	total(v,n);
	greutate max;
	max.s=0;max.a=0;
	for(int i=1;i<=n;i++)
	{
		if(v[i].s>max.s)
			max.s=v[i].s;
		if(v[i].a>max.a)
			max.a=v[i].a;
	}
	for(int i=1;i<=n;i++)
	{
		if(v[i].s==max.s)
			g<<i<<" ";
	}
	g<<endl;
	for(int i=1;i<=n;i++)
	{
		if(v[i].a==max.a)
			g<<i<<" ";
	}
}