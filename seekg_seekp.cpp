#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream obj1;
	obj1.open("file1.txt",ios::out);//write
	obj1<<"welcome to all";
	cout<<"without seek:"<<obj1.tellp();
	obj1.seekp(6);
	cout<<endl<<"After seekp(6) without ref:"<<obj1.tellp();
	obj1.seekp(2,ios::cur);
	cout<<endl<<"After seek(2,cur):"<<obj1.tellp();
	obj1.seekp(-3,ios::end);
	cout<<endl<<"After seekp(-3,end)"<<obj1.tellp();
	obj1.close();
	cout<<endl<<endl;
	obj1.open("file1.txt",ios::in);//read
	cout<<endl<<"tellg without seek:"<<obj1.tellg();
	obj1.seekg(8);
	cout<<endl<<"tellg after seekg(8)"<<obj1.tellg();
	obj1.close();
	return 0;
}
