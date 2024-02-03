#include<iostream>
using namespace std;
class Rectangle
{
	int l,b;
	public:
		Rectangle(int x,int y):l(x),b(y)
		{
		}
		Rectangle()
		{
			l=2;
			b=3;
		}
		int area()
		{
			return(l*b);
		}
		void des()
		{
			Rectangle r1(4,5);
			cout<<"Area of r1 = "<<r1.area()<<endl;
		}
		~Rectangle()//Destructor
		{
		cout<<"Destructor called."<<endl;	
		}
};
int main()
{
	Rectangle r(23,32);
	r.des();
	{
		r.des();
	}
	cout<<"Area of r= "<<r.area()<<endl;
	Rectangle r2;
	cout<<"Area of r2 = "<<r2.area()<<endl;
}
