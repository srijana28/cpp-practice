#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	float *p=NULL;
	float *r=NULL;
	float *t=NULL;
	float *si=NULL;
	p=new float;
	r=new float;
	t=new float;
	si=new float;
	if(p==NULL||r==NULL||t==NULL||si==NULL)
	{
		cout<<"Memory allocation failed.";
		exit(1);
	}
	cout<<"\n Enter principal, rate and time: ";
	cin>>*p>>*r>>*t;
	*si=(0.01)*(*p)*(*r)*(*t);
	cout<<"\nSimple Interest= "<<*si;
	delete p;
	delete r;
	delete t;
	delete si;
	return 0;
	
}
