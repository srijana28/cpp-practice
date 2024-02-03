#include<iostream>
using namespace std;
class Rectangle
{
	int length;int breadth;
	public:
		Rectangle()
		{
			length=9;
			breadth=4;
		}
		void area()
		{
			int a=length*breadth;
			cout<<"area= "<<a;
		}
};
int main()
{
	Rectangle obj;
	obj.area();
	return 0;
}
