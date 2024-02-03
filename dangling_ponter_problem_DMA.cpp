#include<iostream>
using namespace std;
//Dangling pointer
int main()
{

	int *ptr=NULL;
	ptr=new int;//request memory for the variable
	*ptr=23;//store value at allocated memory
	cout<<"Address where pointer is pointing before deletion:"<<ptr<<endl;
	delete ptr;//free up the memory
	//Dangling pointer(same address will be printed
	cout<<"Address where pointer is pointing after deletion:"<<ptr<<endl;
	ptr=NULL;//ponter is no longer dangling
	cout<<"Address after solving the problem with dangling pointer:"<<ptr<<endl;
	return 0;
}
