#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char c[30];
	ofstream of("file1.txt");
	of<<"Hello";//to write in the file
	of.close();
	ifstream inf("file1.txt");//opening a file: to make the file available in RAM
	inf>>c;//to read from the file
	inf.close();//close the file after an operation to save it permanently
	
	cout<<c;
	return 0;
}
