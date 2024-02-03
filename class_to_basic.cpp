#include<iostream>
using namespace std;
class Time
{
	int h,m;
	public:
		void getdata()
		{
			cout<<"hours=";
			cin>>h;
			cout<<"minutes=";
			cin>>m;
		}
		operator int()//has no return type and no arguments
		{
			int t=h*60+m;
			return t;//has no return type but can return value
		}
		operator float()
		{
			float n=h*60.0+m;
			return n;
		}
};
int main()
{
	int min;
	Time t1;
	t1.getdata();
	min=t1;
	cout<<"Time= "<<min<<" minutes"<<endl;
	float min2=t1;
	cout<<"Time float= "<<min2<<" minutes"<<endl;
}
