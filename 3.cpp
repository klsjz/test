/*?ere are two sorted arrays A and B of size m and n respectively. Find the median of the two sorted
arrays. ?e overall run time complexity should be O (log ( m + n )).*/
#include<iostream>
using namespace std;
int find_kth(int A[],int m,int B[],int n,int k)
{
	if(m>n)return find_kth(B,n,A,m,k);
	if(k==1)return (A[0]>B[0])?B[0]:A[0];
	if(m==0)return B[k-1];
	if(m<k/2)return B[k-m-1];
	int pa=k/2;
	int pb=k-pa;
	if(A[pa-1]<B[pb-1])return find_kth(A+pa,m-pa,B,n,k-pa);
	else if(A[pa-1]>B[pb-1])return find_kth(A,m,B+pb,n-pb,k-pb);
	else return A[pa-1];
}
int main()
{
	int a[]={1,2,3,6,8};
	int b[]={4,5,7,10,11,13};
	cout<<find_kth(a,5,b,6,4)<<endl;
	cout<<find_kth(a,5,b,6,1)<<endl;
	cout<<find_kth(a,5,b,6,9)<<endl;
	cout<<find_kth(a,5,b,6,2)<<endl;
	return 0;
}
