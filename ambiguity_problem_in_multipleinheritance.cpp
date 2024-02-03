#include<iostream>
using namespace std;
class B
{
	public:
		void show()
		{
			cout<<"Printing the class B\n";
		}
};
class C
{
	public:
		void show()
		{
			cout<<"Printing the class C\n";
		}
};
class D:public B,public C
{
	public:
		void call()
		{
			B::show();
			C::show();
		}
};
int main()
{
	D obj;
	obj.call();
}
