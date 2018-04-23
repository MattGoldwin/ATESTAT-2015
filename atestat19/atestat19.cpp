#include<iostream>
#include<fstream>
using namespace std;
char vocale(char a[71])
{
	for(int i=0;i<=strlen(a);i++)
	{
		if(strchr("AEIOU",a[i]))
			{strcpy(a+i,a+i+1);
			cout<<a[i];}
		else
			cout<<a[i];
	}
}
int main()
{
	ifstream f("at.in");
	ofstream g("at.out");
	char a[71];
	f.get(a,71);
	for(unsigned int i=0;i<=strlen(a);i++)
	{
		if((a[i+1]==' '||a[i+1]=='\0')&&a[i]>=65&a[i]<=90) 
		{
			cout<<char(a[i]+32);
		}
		else
			cout<<a[i];
	}
	cout<<endl;
	vocale(a);
	f.close();
	ifstream h("at.in");
	bool A=0;
	while(h>>a)
	{
		if(strchr("AEIOU",a[1]))
			{g<<a<<" ";
			A=1;}
	}
	if(A==0)
		g<<"NU EXISTA ASTFEL DE NUMERE";
}
