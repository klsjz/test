#include<iostream>
using namespace std;
int main()
{
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	cout<<a[1][2]<<endl;
	cout<<*((int *)a+1)<<*(a+2)<<endl;
	return 0;

}
