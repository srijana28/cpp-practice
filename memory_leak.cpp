#include<iostream>
using namespace std;
void mem_leak()
{
	int *ptr=new int[10];
	//memory has been allocated at run time but not deallocated, so this function can lead to memory leak
	delete []ptr;//solution to mem. leak by deleting it before its scope
}
int main()
{
	mem_leak();
	return 0;
}
