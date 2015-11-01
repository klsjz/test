#include<iostream>
using namespace std;
int main()
{
	int p,n;
	int j;
	cin>>p>>n;
	int *tep=new int[n];
	int *used=new int[p];
	for(int i=0;i<p;i++)
		used[i]=0;
	for(int i=0;i<n;i++)
	{
		cin>>tep[i];
		j=tep[i]%p;
		if(used[j]==0)
			used[j]=1;
		else	
		{
			cout<<i+1<<endl;
			return 0;
		}
	}
	cout<<-1<<endl;
	return 0;
}
	
