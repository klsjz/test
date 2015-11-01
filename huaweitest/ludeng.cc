#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
	int m,n;
	set<int>myset;
	cin>>m>>n;
	int temp1,temp2;
	while(n>0)
	{
		cin>>temp1>>temp2;
		for(int i=temp1;i<=temp2;i++)
			myset.insert(i);
		n--;
	}
	cout<<m+1-myset.size()<<endl;
}
		
