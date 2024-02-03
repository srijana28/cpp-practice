#include<iostream>
using namespace std;
class A
{
	protected:
		float p;
		public:
			void getdata()
			{
				cout<<"enter p:";
				cin>>p;
			}
};
class B:public A
{
	protected:
		float q;
		public:
			void getdataB()
			{
				cout<<"enter the value of q:";
				cin>>q;
			}
};
class C
{
	protected:
		float r;
		public:
			void getdataC()
			{
				cout<<"enter the value of r:";
				cin>>r;
			}
};
class D:public B,public C
{
	public:
		//C ob;
		//getdataC();
		void average()
		{
			cout<<"Average="<<(p+q+r)/3;
		}
		
};
int main()
{
	D obj;
	obj.getdata();
	obj.getdataB();
	obj.getdataC();
	obj.average();
}
