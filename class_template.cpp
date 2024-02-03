#include<iostream>
using namespace std;
template<class T>
class abc
{
	T a,b;
	public:
		abc(T x,T y)
		{
			a=x;
			b=y;
		}
		T max()
		{
			return(a>b?a:b);
		}
};
int main()
{
	abc<int>obj(4,6);
	cout<<"max of 4 and 6 is: "<<obj.max()<<endl;
	abc<float>obj1(6.5,8.9);
	cout<<"max of 6.5 and 8.9 is: "<<obj1.max()<<endl;
	abc<char>obj2('A','a');
	cout<<"max of 'A' and 'a' is: "<<obj2.max()<<endl;
	
	
	
}
