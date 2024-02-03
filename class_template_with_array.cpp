#include<iostream>
#define MAX 5
using namespace std;
template<class T>
class xyz
{
	T *arr=NULL;
	int size;
	public:
		
		xyz()
		{
			cout<<"enter the size of array\n";
			cin>>size;
			arr=new T[size];
			cout<<"enter the array elements\n";
			for(int i=0;i<size;i++)
			cin>>arr[i];
			
			
		}
		T sum()
		{
			T s=0;
			for(int i=0;i<MAX;i++)
			{
				s=s+arr[i];
				
			}
			return s;
		}
};
int main()
{
	xyz<int>obj;
	cout<<"sum of array elements is : "<<obj.sum()<<endl;
	xyz<float>obj1;
	cout<<"sum of array elements is : "<<obj1.sum()<<endl;
}
