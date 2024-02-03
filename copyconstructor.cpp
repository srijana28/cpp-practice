#include<iostream>
using namespace std;
class A
{
	int x;
	public:
		A(int a)
		{
			x=a;
		}
		A(A &obj)//copy constructor  
		{
			x=obj.x;
		}
		void display()
		{
			cout<<"Value of x:"<<x<<endl;
		}
};
int main()
{
	A obj1(10);
	cout<<"Displaying x of obj1:\n";
	obj1.display();
	A obj2(obj1);//call by reference
	cout<<"Displaying x of obj2:\n";
	obj2.display();
	A obj3=obj1;
	cout<<"Displaying x of obj3:\n";
	obj3.display();
	return 0;
	
}
