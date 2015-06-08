/*Suppose a sorted array is rotated at some pivot unknown to you beforehand.
i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2
You are given a target value to search. If found in the array return its index, otherwise return -1
*/
#include<iostream>
using namespace std;
int research_rotated(int a[],int n,int target)
{
	int first=0,last=n-1;
	while (first<=last)
	{	
		int mid=(last+first)/2;
		if(a[mid]==target)
		return mid;
		if(a[first]<=a[mid])
		{			
			if(a[first]<=target&&target<a[mid])
				last=mid;
			else 
				first=mid+1;
		}
		else
		{
			if(a[mid]<=target&&target<=a[last])
				first=mid+1;
			else
				last=mid;
		}
	}
		return -1;
}
int main()
{
	int a[7]={4,5,6,7,1,2,3};
	cout<<research_rotated(a,7,4)<<endl;
	cout<<research_rotated(a,7,5)<<endl;
	cout<<research_rotated(a,7,6)<<endl;
	cout<<research_rotated(a,7,2)<<endl;
	cout<<research_rotated(a,7,3)<<endl;
	return 0;
}
				
