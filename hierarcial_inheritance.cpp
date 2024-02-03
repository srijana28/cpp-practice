//hierarchical inheritance
#include<iostream>
using namespace std;
class A
{
	protected:
		int a;
	public:
		void getdataA()
		{
		cout<<"\n Enter value of a:";
		cin>>a;	
		}
};
class B:public A
{
	protected:
		int b;
		public:
			void getdataB()
			{
				cout<<"\n Enter value of b:";
				cin>>b;	
			}
			void sum()
			{
				cout<<"sum="<<a+b<<endl;
			}
		};
	class C:public A
	{
		protected:
			int c;
			public:
				void getdataC()
				{
					cout<<"enter c:";
					cin>>c;
				}
				void product()
				{
					cout<<"product:"<<(a*c)<<endl;
				}
	};
	int main()
	{
		B obj1;
		C obj2;
		obj1.getdataA();
		obj1.getdataB();
		obj1.sum();
		obj2.getdataC();
		obj2.product();
	}

