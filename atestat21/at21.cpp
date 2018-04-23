#include<iostream>
#include<fstream>
using namespace std;
char caract(char s[71])
{
	for(unsigned int i=0;i<strlen(s);i++)
	{
		if(s[i+1]==' '||s[i+1]=='\0')
			i+=1;
		cout<<s[i];
	}
}
int main()
{
	ifstream f("at.in");
	ofstream g("at.out");
	char s[71];
	f.get(s,71);
	for(unsigned int i=0;i<strlen(s);i++)
	{
		cout<<char(s[i]+32);
		if(s[i+1]==' '||s[i+1]=='\0')
			{cout<<endl;i++;}
	}
	cout<<endl;
	caract(s);
	f.close();
	ifstream h("at.in");
	unsigned int max=0;
	while(h>>s)
	{
		if(strlen(s)>max)
			max=strlen(s);
	}
	h.close();
	ifstream k("at.in");
	while(k>>s)
	{
		if(max==strlen(s))
			{g<<s;return 0;}
	}
}
