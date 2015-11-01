#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int j=0;
	int temp;
	int ntimes=0;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		j+=temp;
		if(j>m)
		{
			j=temp;
			ntimes++;
		}
	}
	cout<<++ntimes<<endl;
	return 0;
}
