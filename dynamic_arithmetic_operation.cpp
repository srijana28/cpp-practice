#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int *sum=NULL;
	int *subtraction=NULL;
	int *product=NULL;
	int *division=NULL;
	int *modulus=NULL;
	int *a=NULL;
	int *b=NULL;
	sum=new int;
	subtraction=new int;
	product=new int;
	division=new int;
	modulus=new int;
	a=new int;
	b=new int;
	if(a==NULL||b==NULL||sum==NULL||subtraction==NULL||product==NULL||division==NULL||modulus==NULL)
	{
		cout<<"Memory allocation failed.";
		exit(1);
	}
	cout<<"Enter a and b: ";
	cin>>*a>>*b;
	*sum=(*a)+(*b);
	*product=(*a)*(*b);
	*subtraction=(*a)-(*b);
	*division=(*a)/(*b);
	*modulus=(*a)%(*b);
	cout<<"Sum="<<*sum<<endl;
	cout<<"Subtraction= "<<*subtraction<<endl;
	cout<<"Product= "<<*product<<endl;
	cout<<"Division="<<*division<<endl;
	cout<<"Modulus="<<*modulus<<endl;
	delete sum;
	delete subtraction;
	delete product;
	delete division;
	delete modulus;
	
	
}
