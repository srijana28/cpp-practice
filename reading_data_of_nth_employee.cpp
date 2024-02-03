#include<iostream>
#include<fstream>
using namespace std;
class Employee{
	string name;
	int id;
	int salary;
	public:
		void getdata()
		{
			cout<<"Enter Name:";
			cin>>name;
			cout<<"Enter ID:";
			cin>>id;
			cout<<"Enter salary:";
			cin>>salary;
		}
		void display()
		{
			cout<<"Name:"<<name<<endl;
			cout<<"ID:"<<id<<endl;
			cout<<"Salary:"<<salary<<endl;
		}
};
int main()
{
	Employee e1[5],e2;
	int location=(n-1)*sizeof(e1[0]);
	for(int i=0;i<5;i++)
	{
		e1[i].getdata();
	}
	fstream obj;
	int n;
	cout<<"enter n:";
	cin>>n;
	obj.open("employee.txt",ios::out|ios::binary);
	for(int i=0;i<5;i++)
	{
		obj.write((char*)&e1[i],sizeof(e1[i]));
	}
	obj.close();
	cout<<"\nReading the details of "<<n<<"th Employee:\n";
	obj.open("employee.txt",ios::in|ios::binary);
	obj.seekg(location);
	obj.read((char*)&e2,sizeof(e2));
	e2.display();
	obj.close();
	return 0;
	
}

