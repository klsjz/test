#include<iostream>
using namespace std;
int fibo(int n)
{
	if(n==1)
	return 1;
	if(n==2)return 2;
	else 
	return fibo(n-1)+fibo(n-2);
}
int main()
{
	int n;
	cin>>n;
	int *day=new int[n];
	for(int i=0;i<n;i++)
	cin>>day[i];
	for(int i=0;i<n;i++)
	{
		cout<<
		
	
