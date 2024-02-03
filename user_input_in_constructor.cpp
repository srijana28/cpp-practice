#include<iostream>
using namespace std;
class Rectangle
{
	int length;int breadth;
	public:
		Rectangle()
		{
			cout<<"enter length:";
			cin>>length;
			cout<<"enter breadth:";
			cin>>breadth;
		}
		void area()
		{
			int a=length*breadth;
			cout<<"area= "<<a<<endl;
		}
};
int main()
{
	Rectangle obj[2];
	obj[0].area();
	obj[1].area();
	return 0;
}
