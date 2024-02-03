#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int rno=11,fee=77000;
	char name[50]="abc";
	ofstream fout("student.txt");
	fout<<rno<<endl<<name<<endl<<fee;
	fout.close();
	ifstream fin("student.txt");
	fin>>rno>>name>>fee;
	fin.close();
}
