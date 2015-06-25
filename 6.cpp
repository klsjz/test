/*Given an array S of n integers, find three integers in S such that the sum is closest to a given number,
target. Return the sum of the three integers. You may assume that each input would have exactly one
solution.
For example, given array S = {-1 2 1 -4}, and target = 1.
e sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
vector<int> threeclosest(vector<int>&num)
{
	sort(num.begin(),num.end());
	for(auto i:num)
		cout<<i<<" ";
	cout<<endl;
	int target=2;
	cout<<"target:"<<target<<endl;
	int small,n;
	vector<int>result;

	vector<int>::iterator x,y,z;
	x=num.begin();
	y=x+1;
	z=num.end()-1;
	small=abs(*x+*y+*z-target);
	go:
	for (auto i=num.begin();i!=num.end()-2;i++)
	{	
		auto j=i+1;
		auto k=num.end()-1;
		n=*i+*j+*k;
		if(abs(n-target)<small){x=i;y=j;z=k;small=abs(n-target);}
		back:
		while(small&&k!=j)
		{
			if(n>target)
			{	
				k--;
				if(k!=j)
				{
				n=*i+*j+*k;
				if(abs(n-target)<small){x=i;y=j;z=k;small=abs(n-target);goto back;}
				}
			}

			else if(n<target)
			{
				j++;
				if(k!=j)
				{
				n=*i+*j+*k;
				if(abs(n-target)<small){x=i;y=j;z=k;small=abs(n-target);goto back;}
				}
			}
			else if(n==target)
			{
			x=i;y=j;z=k;goto end;
 			}
		}
	}
	end:
	
				result.push_back(*x);
				result.push_back(*y);
				result.push_back(*z);
	return result;
}
int main()
{
	int s[]={-1,2,1,-4,-3};
	vector<int>num(s,s+5);
	num=threeclosest(num);
	for(auto i=num.begin();i!=num.end();i++)
		cout<<*i<<" ";
		cout<<"\n";
	return 0;
}
