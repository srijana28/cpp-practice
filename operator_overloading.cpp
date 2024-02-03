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
		void operator-()//operator is keyword
		{
			x=-x;
			y=-y;
			z=-z;
		}
};
int main()
{
	Number N(2,5,7);
	cout<<"Before operator overloading.\n";
	N.showdata();
	
	N.operator-();//calling operator- functio
	cout<<"After operator overloading.\n";
	N.showdata();
	-N;//another way to call operator function
	cout<<"After operator overloading again.\n";
	N.showdata();
	
	
}
