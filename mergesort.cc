#include<iostream>
using namespace std;
void merge(int *r,int *rf,int i,int m,int n)
{
	int j,k;
	for(j=m+1,k=i;i<=m&&j<=n;k++)
		if(r[j]<r[i])rf[k]=r[j++];
		else rf[k]=r[i++];
	while(i<=m)rf[k++]=r[i++];
	while(j<=n)rf[k++]=r[j++];
		
		
}
void mergesort(int *r,int *rf,int length)
{
	int len=1;
	int *q=r;
	int *tem;
	while(len<length)
	{
		int s=len;
		len=2*s;
		int i=0;
		while(i+len<length)
		{
			merge(q,rf,i,i+s-1,i+len-1);
			i=i+len;
		}
		if(i+s<length)
		{
			merge(q,rf,i,i+s-1,length-1);
		}
		tem=q;
		q=rf;
		rf=tem;
	}
}
int main()
{
	int a[10]={2,1,4,4,5,5,5,6,7,8};
	int b[10];
	for(int i=0;i<10;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	mergesort(a,b,10);
	for(int i=0;i<10;i++)
		cout<<b[i]<<" "<<a[i]<<endl;
	cout<<endl;
	return 0;
}
