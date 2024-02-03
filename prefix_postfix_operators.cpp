#include<iostream>
using namespace std;
class Number{
	int x;
	public:
		Number(int n)
		{
			x=n;
		}
		void operator++()
		{
			cout<<"\nPrefix increment:";
			cout<<++x<<endl;
		}
		void operator++(int n)
		{
			cout<<"\nPostfix increment:";
			cout<<x++<<endl;
		}
		friend void operator--(Number);
		friend void operator--(Number,int);
		
};
void operator--(Number obj)
{
	cout<<"\nPrefix decrement:";
	cout<<--(obj.x)<<endl;
}
void operator--(Number ob,int n)
{
	cout<<"\nPostfix decrement:";
	cout<<ob.x--<<endl;
}
int main()
{
	Number obj1(5);
	++obj1;
	obj1.operator++();
	--obj1;
	obj1++;
	obj1--;
	operator--(obj1,8);
	
}
