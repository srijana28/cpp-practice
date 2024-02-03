#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string s="hello";
	ofstream obj;
	obj.open("abc.txt",ios::binary);
	obj.write((char*)&s,sizeof(s));
	obj.close();
	string str;
	ifstream infile;
	infile.open("abc.txt",ios::binary);
	infile.read((char*)&str,sizeof(s));
	cout<<str<<endl;
	infile.close();
}
