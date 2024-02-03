#include<iostream>
using namespace std;
template<class T1,class T2>
void multiply(T1 num1, T2 num2)
{
	cout<<num1*num2;
}
int main()
{
	int n1=3;
	float n2=4.4;
	cout<<"\n Product of n1*n2= ";
	multiply<int,float>(n1,n2);
	cout<<"\n Product of 2*2=";
	multiply<int,int>(2,2);
	cout<<"\n Product of 4.4*3=";
	multiply<float,int>(4.4,3);
}
