/*Given an array S of n integers, are there elements a, b, c, and d in S such that a + b + c + d = target?
Find all unique quadruplets in the array which gives the sum of target.
Note:
2.1 数组 13
• Elements in a quadruplet ( a, b, c, d ) must be in non-descending order. (ie, a ≤ b ≤ c ≤ d)
• e solution set must not contain duplicate quadruplets.
For example, given array S = {1 0 -1 0 -2 2}, and target = 0.
A solution set is:
(-1, 0, 0, 1)
(-2, -1, 1, 2)
(-2, 0, 0, 2)
分析
跟 3Sum 很类似，先排序，然后二分查找，复杂度 O ( n 3 log n )，会超时。
然后想到，可以先缓存两个数的和，最终复杂度 O ( n 3)。这个策略也适用于 3Sum 。
*/
#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
int target=0;
vector<vector<int>> foursum(vector<int>&num)
{
	vector<vector<int>> result;
	map<int,vector<pair<int,int>>>cache;
	sort(num.begin(),num.end());
	cout<<"the sorted num is:"<<endl;
	for(auto i:num)
		cout<<i<<" ";
	cout<<endl;
	result.push_back(num);
	for(int i=0;i<num.size();i++)
		for(int j=i+1;j<num.size();j++)
			cache[num[i]+num[j]].push_back(pair<int,int>(i,j));
	cout<<"i see you"<<endl;
	for(int x=2;x<num.size();x++)
		for(int y=x+1;y<num.size();y++)
		{
			
			int e=target-num[x]-num[y];
			auto it=cache.find(e);
			if( it!=cache.end())
			{
				for(int k=0;k<cache[e].size();k++)
				{
					if(x<=cache[e][k].second)continue;
					else 
					result.push_back(vector<int>{num[cache[e][k].first],num[cache[e][k].second],num[x],num[y]});	
				}
			}
		}


	return result;

}
int main()
{
	int n[6]={1,0,-1,0,-2,2};
	for(auto i:n)
		cout<<i<<" ";
	cout<<endl;
	vector<int>num(n,n+6);
	vector<vector<int>>result;
	result=foursum(num);
	cout<<"the result is:"<<endl;
	for(auto i:result)
	{
		for(auto j:i)
			cout<<j<<" ";
		cout<<endl;
	}

	return 0;
}
