#include<iostream>
using namespace std;
class Rectangle
{
	int length;int breadth;
	public:
		Rectangle(int x,int y=12)//parametrized constructor with default arguments
		{
			length=x;
			breadth=y;
		}
		Rectangle()//constructor overloading
		{
			length=5;
			breadth=6;
		}
		void area()
		{
			int a=length*breadth;
			cout<<"area= "<<a<<endl;
		}
};
int main()
{
	int a;
	cout<<"enter a:";
	cin>>a;
	Rectangle obj(a,3);
	Rectangle obj1(7);
	Rectangle obj3;
	obj.area();
	obj1.area();
	obj3.area();
	return 0;
}
