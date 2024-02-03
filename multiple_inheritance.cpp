#include<iostream>

using namespace std;
class student
{
	int reg;
	protected:
		string name;
	public:
		void getstudentdata()
		{
			cout<<"enter student registration no.";
		cin>>reg;	
		}
		void show_student_data()
		{
			cout<<"Registration number of student:"<<reg<<endl;
		}
	
};
class teacher
{
	int reg_t;
	protected:
		string t_name;
		public:
			void get_tdata()
			{
				cout<<"enter teacher reg.no:";
				cin>>reg_t;
			}
			void showdata()
			{
				cout<<"teacher reg. no="<<reg_t<<endl;
			}
		
};
class department:protected teacher,public student
{
	int dep_id;
	string dep_name;
	public:
		void getdata()
		{
			cout<<"enter department name:";
			cin>>dep_name;
			cout<<"enter student name:";
			cin>>name;
			cout<<"enter teacher name:";
			cin>>t_name;
		}
		get_tdata();
		show_tdata();
		void showdata()
		{
			cout<<"teacher name:"<<t_name<<endl;
			cout<<"student name:"<<name<<endl;
		    cout<<"department name:"<<dep_name<<endl;
		}
};
int main()
{
	department obj;
	obj.getstudentdata();
	obj.getdata();
	obj.showdata();
	obj.show_student_data();
}
