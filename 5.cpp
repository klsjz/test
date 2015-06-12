/*Given an array S of n integers, are there elements a, b, c in S such that a + b + c = 0? Find all unique
triplets in the array which gives the sum of zero.
10 第 2 章 线性表
Note:
• Elements in a triplet ( a, b, c ) must be in non-descending order. (ie, a ≤ b ≤ c)
• e solution set must not contain duplicate triplets.
For example, given array S = {-1 0 1 2 -1 -4}.
A solution set is:
(-1, 0, 1)
(-1, -1, 2)
分析
先排序，然后二分查找，复杂度 O ( n 2 log n )。
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*
vector<vector<int>> threeSum(vector<int>&num)
{
	vector<vector<int>>result;
	if(vector.size()<3)return result;
	sort(num.begin(),num.end());
	const int target= 0;
	vector<int>::iterator a b;
	for(a=num.begin();a!=num.end()-3;a++)
	{
		for( b=a+1;b!=num.end()-2;b++)
		{
			int c=target-*a-*b;
			if (num.find()!=num.begin())
				result.push_back(vector<int>{*a,*b,c});
		}
	}
	return result;
}*/
int main()
{
	int list[6]={-1,0,1,2,-1,-4};
	vector<int> num(list,list+6);
	vector<int>::iterator i;
	for (i=num.begin();i!=num.end();i++)
		cout<<*i<<" ";
	return 0;
}	












