#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int N=0;
vector<int>result;
bool cmp(int i)
{
	if(result.size()==0)return true;
	vector<int>::iterator it;
	for(it=result.begin();it!=result.end();it++)
	{
		if(i<=*it)return false;
	}
	return true;
}
void f(int i,int j,int n,int m,int k,int *num[])
{
	if(i>=n||j>=m)return;
	if(i==n-1&&j==m-1)
	{
		
		if(cmp(num[i][j]))
		{
			if(result.size()==k-1)
		{		N++;
			cout<<"type1:";
			for(int a=0;a<result.size();a++)
				cout<<result[a]<<" ";
			cout<<num[i][j]<<endl;
		}
		}
			if(result.size()==k)
			{	N++;
				cout<<"type2:";
				for(int a=0;a<result.size();a++)
				cout<<result[a]<<" ";
				cout<<endl;
			}
			return;
	}
	if(cmp(num[i][j]))
	{
		result.push_back(num[i][j]);
		f(i+1,j,n,m,k,num);
		f(i,j+1,n,m,k,num);
		result.pop_back();
	}
	f(i+1,j,n,m,k,num);
        f(i,j+1,n,m,k,num);
	return ;
}
int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	int **num=new int*[n];
        for(int i=0;i<n;i++)
                num[i]=new int[m];
        for(int i=0;i<n;i++)
                for(int j=0;j<m;j++)
                  cin>>num[i][j];
	f(0,0,n,m,k,num);
	cout<<N<<endl;
	return 0;
}


