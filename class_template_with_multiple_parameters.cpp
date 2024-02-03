#include<iostream>
using namespace std;
template<class T1,class T2>
class abc
{
	T1 a;T2 b;
	public:
		abc(T1 x,T2 y)
		{
			a=x;
			b=y;
		}
		void max()
		{
			cout<<(a>b?a:b);
		}
};
int main()
{
	abc<int,float>obj(4,6.4);
	cout<<"max of 4 and 6 is: "<<obj.max()<<endl;
	abc<float>obj1(6.5,8.9);
	cout<<"max of 6.5 and 8.9 is: "<<obj1.max()<<endl;
	abc<char>obj2('A','a');
	cout<<"max of 'A' and 'a' is: "<<obj2.max()<<endl;
	
	
	
}
