#include<iostream>
using namespace std;
template<class T,class U=char>
class A
{
	public:
		T x;
		U y;
};
int main()
{
	A<char> a;
	A<int,int> b;
	cout<<sizeof(a)<<endl;
	cout<<sizeof(b)<<endl;
}
