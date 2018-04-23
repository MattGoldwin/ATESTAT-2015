#include<iostream>
#include<fstream>
using namespace std;
char isf(char s[71])
{
		if(strchr("aeiou",s[0])==0&&strchr("aeiou",s[strlen(s)-1])==0)
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
		if((a[i-1]==' '||i==0)&&a[i]>=97&a[i]<=122) 
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
	ifstream c("at.in");
	int u=0;
	while(c>>a)
	{
		if(strlen(a)==4)
			u++;
	}
	if(u==0)
		cout<<"NU EXISTA ASTFEL DE CUVINTE";
	else
		g<<u;
}