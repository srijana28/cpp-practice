#include<iostream>
using namespace std;
class Time
{
	private:
		int h,m;
		public:
			Time()
			{
				h=m=0;
			}
			Time(int t)
			{
				h=t/60;
				m=t%60;
			}
			void showdata()
			{
				cout<<"Time="<<h<<"hours "<<m<<"minutes.\n";
				
			}
};
int main()
{
	Time obj;
	int min;
	cout<<"Enter time in minutes:\n";
	cin>>min;
	obj=min;
	obj.showdata();
}
