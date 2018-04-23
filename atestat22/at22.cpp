#include<iostream>
#include<fstream>
using namespace std;
char spatiu(char a[71])
{
	int j=0;
	if(a[1]!='\0')
		if(a[0]==' '&&a[1]==' ')
			spatiu(a+1);
		else
		{
			cout<<a[0];
			spatiu(a+1);
		}
}
int main()
{
	ifstream f("at.in");
	ofstream g("at.out");
	char s[71];
	f.get(s,71);
	for(unsigned int i=0;i<=strlen(s);i++)
		if(s[i+1]==' '&&s[i+1]=='\0')
			if(strchr("aeiou",s[i]))
				cout<<s[i];
			else
				if(strchr("AEIOU",s[i]))
					cout<<char(s[i]+32);
				else
					if(int(s[i])>=97&&int(s[i])<=122)
						cout<<char(s[i]-32);
					else
						cout<<s[i];
		else
			cout<<s[i];
	cout<<endl<<endl;
	spatiu(s);
	ifstream h("at.in");
	char v[71],j=0;
	while(h>>v)
		if(strlen(v)>=4&&(v[0]==v[strlen(v)-1]||char(v[0]+32)==v[strlen(v)-1]||v[0]==char(v[strlen(v)-1]+32)))
			{g<<v<<" ";
			j=1;}
	if(j==0)
		g<<"NU EXISTA ASTFEL DE CUVINTE";
 }	