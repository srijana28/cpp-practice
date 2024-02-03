#include<iostream>
using namespace std;
#define MAX 5
template<class Type>
Type sum(Type A[])
{
	Type total=0;
	for(int i=0;i<MAX;i++)
	{
		total+=A[i];
	}
	return total;
}
template<class Type>
void read(Type A[])
{
	for(int i=0;i<MAX;i++)
	{
		cin>>A[i];
	}
}
int main()
{
	int Array[MAX];
	float Array1[MAX];
	cout<<"enter the integer array elements:\n";
	read<int>(Array);
	cout<<"\n Sum of elemets= "<<sum<int>(Array);
	cout<<"\n Enter the float array elements:\n";
	read<float>(Array1);
	cout<<"\n Sum of float elements= "<<sum<float>(Array1);
}
