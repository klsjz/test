#include<iostream>
using namespace std;
#include<algorithm>
void heap_adjust(int* A,int index,int length)
{
	int temp=A[index];
	int child=2*index+1;
	while(child<length)
	{
		if((child+1<length)&&A[child]<A[child+1])
			child++;
		if(A[index]<A[child])
			swap(A[index],A[child]);
		index=child;
		child=2*index+1;
	}
		A[index]=temp;
}
/*void make_heap(int* A,int length)
{
	for(int i=length/2;i>=0;i--)
		heap_adjust(A,i,length);
}*/
/*void heap_sort(int* A,int length)
{
	make_heap(A,length);
	for(int i=length-1;i>=0;i--)
	{
		swap(A[0],A[i]);
		heap_adjust(A,0,i);
	}
}*/
int main()
{
	int A[]={2,3,4,5,6,7,9,10,1,8};
//	heap_sort(A,10);
	for(int i=9;i>0;i--)
	{
		make_heap(A,A+i);
		swap(A[0],A[i]);
	}	
	for(int i=0;i<10;i++)
		cout<<A[i]<<" ";
	cout<<endl;
	return 0;
}
