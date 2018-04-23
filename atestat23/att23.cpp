#include<iostream>
#include<fstream>
using namespace std;
struct sportiv
{
	int m,s;
}a[27];
int diferenta(sportiv a[27], int n)
{
	int min=0,j=0;
	for(int i=0;i<=n;i++)
	{
		if(a[i].m*60+a[i].s<min)
			min=a[i].m*60+a[i].s;
	}
	for(int i=0;i<=n;i++)
	{
		if((a[i].m*60+a[i].s)-min<60)
			j++;
	}
	cout<<j-1;
}
int main()
{
	ifstream f("at.in");
	ofstream g("at.out");
	int n;
	f>>n;
	for(int i=1;i<=n;i++)
		{
			f>>a[i].m>>a[i].s;
			cout<<a[i].m*60+a[i].s<<"\n";
		}
	cout<<endl;
	diferenta(a,n);
	int p,u;
	sportiv primul,ultimul;
	int min=a[1].m*60+a[1].s,max=a[1].m*60+a[1].s;
	for(int i=1;i<=n;i++)
		{
			if(a[i].m*60+a[i].s<min)//a[i].m<primul.m&&a[i].s<primul.s)
				{primul.m=a[i].m;
				primul.s=a[i].s;
				p=i;
				min=a[i].m*60+a[i].s;}
			if(a[i].m*60+a[i].s>max)//a[i].m>ultimul.m&&a[i].s>ultimul.s)
				{ultimul.m=a[i].m;
				ultimul.s=a[i].s;
				u=i;
				max=a[i].m*60+a[i].s;}
		}
	g<<p<<" "<<primul.m<<" minute "<<primul.s<<" secunde\n"<<u<<" "<<ultimul.m<<" minute "<<ultimul.s<<" secunde";
}




//3 4 2 4 7 6 5 4 3 2
// 2345 54 5643