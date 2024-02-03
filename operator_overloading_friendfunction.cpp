#include<iostream>
using namespace std;
class Number
{
	int x,y,z;
	public:
		Number(int a,int b,int c)
		{
			x=a;
			y=b;
			z=c;
		}
		void showdata()
		{
			cout<<"x="<<x<<endl;
			cout<<"y="<<y<<endl;
			cout<<"z="<<z<<endl;
		}
		friend void operator-(Number);
};
void operator-(Number obj)
		{
			/*obj.x=-(obj.x);
			obj.y=-(obj.y);
			obj.z=-(obj.z);*/
				cout<<"x="<<-obj.x<<endl;
			cout<<"y="<<-obj.y<<endl;
			cout<<"z="<<-obj.z<<endl;
			
			
		}
int main()
{
	Number N(2,5,7);
	cout<<"Before operator overloading.\n";
	N.showdata();
	
	/*operator-(N);
	cout<<"After operator overloading.\n";
	N.showdata();*/
	-N;//another way to call operator function
	cout<<"After operator overloading again.\n";
	N.showdata();
	
	
}
