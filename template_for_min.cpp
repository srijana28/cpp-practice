#include<iostream>
using namespace std;
template<class T>
T min1(T a,T b)
{
	return(a<b?a:b);
}
int main()
{
	int x,y;
	float p,q;
	cout<<"enter integer:";
	cin>>x>>y;
	cout<<"enter float: ";
	cin>>p>>q;
	cout<<"\n min of two :";
	cout<<"min of integer "<<min1(x,y)<<endl;//works withot angular brackets
	cout<<"min of float "<<min1<float>(p,q)<<endl;
	cout<<"min of char "<<min1<char>('A','a')<<endl;
}
