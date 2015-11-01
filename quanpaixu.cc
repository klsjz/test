#include<iostream>
#include<algorithm>
#include<vector>
#include <math.h>
using namespace std;
vector<vector<int>>p;
void dfs(int k,vector<int>temp)
{
//	vector<int>temp;
	if(k==3)
	{
		p.push_back(temp);
		return;
	}
	for(int i=0;i<10;i++)
	{
			temp.push_back(i);
			
			dfs(k+1,temp);
			temp.pop_back();
	}
}
int main()
{
	vector<int>temp;
	dfs(0,temp);
	int j=0;
	for(auto i:p)
	{		
		for(auto j:i)
			cout<<j<<" ";
		cout<<endl;		
	}
	return 0;
}
		
	
