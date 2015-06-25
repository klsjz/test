/*2.1.14 Trapping Rain Water
描述
Given n non-negative integers representing an elevation map where the width of each bar is 1, compute
how much water it is able to trap aer raining.
For example, Given [0,1,0,2,1,0,1,3,2,1,2,1] , return 6.
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int TrappingWater(vector<int>&num,int n)
{	
	int *left=new int[n]();
	int *right=new int[n]();

//	int left[12]={0};
//	int right[12]={0};
	int sum=0;
	
	for(int i=1;i<n-1;i++)
	{	
//		left[i]=max(1,2);
		left[i]=max(left[i-1],num[i-1]);
		
	}

	for(int i=n-2;i>0;i--)
	{
		right[i]=max(right[i+1],num[i+1]);
	}
	for(int i=0;i<n;i++)
	cout<<left[i]<<" ";
	cout<<endl;
        for(int i=0;i<n;i++)
        cout<<right[i]<<" ";
	cout<<endl;
	for(int i=1;i<n-1;i++)
	{
		int h=min(left[i],right[i]);
		if(h>num[i])
			sum+=(h-num[i]);
	}

	delete[] left;
	delete[] right;
	return sum;
	
}
int main()
{
	int N[12]={0,1,0,2,1,0,1,3,2,1,2,1};
	vector<int>num(N,N+12);
	int sum=TrappingWater(num,12);
	cout<<"the water is:"<<sum<<endl;
	return 0;
}
