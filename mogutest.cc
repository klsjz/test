#include<iostream>
using namespace std;
int main()
{
	char *p1="hell0";
	char *p2="woorld";
	char *p3="aaa";
	char *str[]={p1,p2,p3};
	cout<<*(str[0]+1)<<endl;
}
