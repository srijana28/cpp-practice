#include<iostream>
#include<fstream>
using namespace std;
class Student
{
	string name;
	int rollno;
	int marks;
	public:
	void getdata()
	{
		cout<<"\nenter name:";
		cin>>name;
		cout<<"enter rollno:";
		cin>>rollno;
		cout<<"enter marks:";
		cin>>marks;
	}
	void putdata()
	{
		cout<<"\nName:"<<name<<endl;
		cout<<"Roll no:"<<rollno<<endl;
		cout<<"Marks:"<<marks<<endl;
	}
};
int main()
{
	Student s1[5],s2[5];
	for(int i=0;i<5;i++)
	{
	s1[i].getdata();}
	fstream obj;
	obj.open("nn.txt",ios::out|ios::binary);
	obj.write((char*)&s1,sizeof(s1));
	obj.close();
	obj.open("nn.txt",ios::in|ios::binary);
	obj.read((char*)&s2,sizeof(s2));
	for(int i=0;i<5;i++){
	s2[i].putdata();}
	obj.close();
}
