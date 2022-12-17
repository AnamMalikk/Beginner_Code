#include<iostream>
#include<fstream>
#include<iomanip>
#include<cstdlib>
using namespace std;
int main()
{
	ifstream f1;
	char ch;
	int lines=0,words=0,chr=0;
	f1.open("abc.txt");
	if(!f1)
	{
		cout<<"\nError in file opening";
		exit(100);
	}
	f1.get(ch);
	while(f1)
	{
		if(ch=='\n')
		{
		  lines++;
		  words++;
	    }
		else if(ch==' ')
		words++;
		else
		chr++;
		f1.get(ch);
	}
	lines++;
	f1.close();
	cout<<"\nLines="<<lines<<"\nWords="<<words<<"\nCharacters="<<chr<<endl;
	return 0;	
}
