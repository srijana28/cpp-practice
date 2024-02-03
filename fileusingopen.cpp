#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int n=80;
	char s[n];
	ofstream fout;
	fout.open("country.txt",ios::out);
	fout<<"USA\n";
	fout<<"India\n";
	fout<<"Russia\n";
	fout.close();
	//fout.open("country.txt",ios::app);
	fout.open("country.txt",ios::trunc);
	fout<<"Germany\n";
	fout.close();
	fout.open("capital.txt",ios::out);
	fout<<"New York\n";
	fout<<"Delhi\n";
	fout<<"Columbia\n";
	fout.close();
	fout.open("country.txt",ios::app);
	fout<<"China\n";
	fout<<12;
	fout.close();
	fout.open("country.txt",ios::ate);
	fout<<"Zambia\n";
	fout.close();
	ifstream fin;
	fin.open("country.txt",ios::binary);
	while(fin)
	{
		fin.getline(s,n);
		cout<<s<<endl;
	}
	fin.close();
	fin.open("capital.txt",ios::in);
	while(fin.eof()==0)
	{
		fin.getline(s,n);
		cout<<s<<endl;
	}
	fin.close();
	
	
}
