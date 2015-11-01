#include<vector>
#include<stdlib.h>
#include<iostream>
#include<string>
#include<stdio.h>
#include<iterator>
using namespace std;
void ro(vector<int>&nums,int k)
{
	 vector<int>temp(nums.begin(),nums.end());
        int j=0;
        for(int i=0;i<nums.size();i++)
        {
            if (i<=k)
	{	
		cout<<"i see"<<endl;
            temp[i+k]=nums[i];
	}
            else
            {
                temp[i-k-1]=nums[i];
            }
        
        }
     nums=temp;
	return ;

}
int main()
{
int a[2]={1,2};
vector<int>nums(a,a+2);
vector<int>C(nums.begin(),nums.end());
//for(it=nums.rbegin();it!=nums.rend();it++)
for(auto i=C.begin();i!=C.end();i++)
cout<<*i<<" ";
return 0;
}

