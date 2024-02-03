#include<iostream>
using namespace std;
class arithmetic
{
	int x,y;
	char a[1];
	
	public:
		void getdata()
		{
			cout<<"enter the value of x and y"<<endl;
			cin>>x>>y;
		}
		void sum()
		{
			int s;
			s=x+y;
			cout<<"Sum="<<s<<endl;
		}
		void subtract()
		{
			int sub;
			sub=x-y;
			cout<<"Difference="<<sub<<endl;
		}
		void multiply()
		{
			int p;
			p=x*y;
			cout<<"Product="<<p<<endl;
		}
		void division()
		{
			int d;
			d=x/y;
			cout<<"Division="<<d<<endl;
		}
		void modulus()
		{
			int m;
			m=x%y;
			cout<<"Mod="<<m<<endl;
		}
};
int main()
{
	arithmetic obj;
	obj.getdata();
	obj.sum();
	obj.subtract();
	obj.multiply();
	obj.division();
	obj.modulus();
	cout<<sizeof(obj);
	}
