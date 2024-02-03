#include<iostream>
using namespace std;
template<class T>
T sum(T x,T y)
{
	return(x+y);
}
int main()
{
	cout<<"sum of integers : "<<sum<int>(2,3)<<endl;
	cout<<"sum of float : "<<sum<float>(3.0,5.5)<<endl;
}
