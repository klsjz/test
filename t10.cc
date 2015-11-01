#include<iostream>
using namespace std;
void f(){cout<<"i see you"<<endl;}
class A{
	void g(){ f();}
	};
int main()
{
	A a;
	a.g();
	return 0;
}
	
