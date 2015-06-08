/*Remove Duplicates from Sorted Array

description:
 Given a sorted array, remove the duplicates in place such that each element appear only
once and return the new length.
Do not allocate extra space for another array, you must do this in place with constant memory.
For example, Given input array A = [1,1,2] ,
Your function should return length = 2, and A is now [1,2] .
*/
#include<iostream>
#include<algorithm>
using namespace std;
#define way 2
#if (way==1)
int removeDuplicate(int A[],int n)
{
	if(n==0)return 0;
	int index=0;
	for(int i=1;i<n;i++)
	{
		if(A[index]!=A[i])
			A[++index]=A[i];
	}
	return index+1;
}
#endif
#if (way==2)
int removeDuplicate(int A[],int n)
{
	if(n==0)return 0;
	return distance(A,unique(A,A+n));
}
#endif
int main()
{
	int A[]={1,1,2,2,3,4,5,5,6};
	cout<<removeDuplicate(A,9)<<endl;
	return 0;
}
