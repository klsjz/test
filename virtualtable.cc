#include<iostream>
using namespace std;
class A
{
        virtual void f()
	{	cout<<"hi i see you"<<endl;}	
	virtual void f2()
	{       cout<<"fuck .."<<endl;}
};
class B:public A
{
	virtual void f()
	{ 	cout<<"haha , i am B"<<endl;}
};
int main()
{
	cout<<sizeof(A)<<endl;
	cout<<sizeof(B)<<endl;
	return 0;
}
