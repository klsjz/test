#include<iostream>
using namespace std;
class A
{
	int a;
public:
	A(int j){a=j;cout<<"i see you A"<<endl;}
        A(){cout<<"haha"<<endl;}
};
class B:public A
{
public:
B(int j){cout<<"i see you B"<<endl;}
B(){cout<<"haha b"<<endl;}
};
int main()
{
	B b;
	return 0;
}
