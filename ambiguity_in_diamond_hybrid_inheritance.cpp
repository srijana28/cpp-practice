#include<iostream>
using namespace std;
class A
{
	protected:
	int x;
	public:
		void getdataA()
		{
			cout<<"enter x:";
			cin>>x;
		}
};
class B:virtual public A
{
	protected:
	int y;
	public:
		void getdataB()
		{
			cout<<"enter value of y:";
			cin>>y;
		}
};
class C:virtual public A
{
	protected:
	int z;
	public:
		void getdataC()
		{
			cout<<"enter value of z:";
			cin>>z;	
		}
};
class D:public B,public C
{
	public:
		void sum()
		{
			int result;
			result=x+y+z;
			cout<<"Sum="<<result;
		}
		void call()
		{
			B::show();
			C::show();
		}
};
int main()
{
	D obj;
	obj.getdataA();
	obj.getdataB();
	obj.getdataC();
	obj.sum();
}
