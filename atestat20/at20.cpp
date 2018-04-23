#include<iostream>
#include<fstream>
using namespace std;
char isf(char s[71])
{
		if(strchr("aeiou",s[0])==0&&strchr("aeiou",s[strlen(s)-1])!=0)
			cout<<s<<" ";
}
int main()
{
	ifstream f("at.in");
	ofstream g("at.out");
	char a[71];
	f.get(a,71);
	for(unsigned int i=0;i<=strlen(a);i++)
	{
		if(a[i+1]==' '||a[i-1]==' '||i==0)//se putea si astfel, punand conditia ca daca a[i] este intre a si z si a[i+1]=' ' atunci a[i] sa se faca litera mare, analog cu inceputul cuvantului 
		{
			cout<<char(a[i]-32);
		}
		else
			cout<<a[i];
	}
	cout<<endl;
	f.close();
	ifstream h("at.in");
	while(h>>a)
		isf(a);
	h.close();
	ifstream z("at.in");
	z>>a;
	for(int i=0;i<=strlen(a);i++)
	{
		if(strchr("aeiou",a[i])==0)
		{
			strcpy(a+i,a+i+1);
			g<<a<<" ";
			i=-1;
		}
	}
}