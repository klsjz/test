#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
	int y;
	int x=1;
	x=x<<31;
	cout<<x<<endl;
	x-=3;
	cout<<x<<endl;
	x&=-x;
	cout<<x<<endl;
	cout<<(2^31)<<endl;
	x=INT_MIN;
	y=INT_MAX;
	cout<<x<<" "<<y<<endl;
	return 0;
}
