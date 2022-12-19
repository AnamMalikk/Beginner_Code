#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
    char ch;
	ifstream f1;
	f1.open("ABC.txt",ios::in);
	ofstream f2;
	f2.open("rough.txt",ios::out);
	while (f1.get(ch))
	{
		if(ch!=' '&&ch!='\t'&&ch!='\n')
		f2.put(ch);
	}
	f1.close();
	f2.close();
	return 0;
}
