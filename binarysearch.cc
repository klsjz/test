#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int>A,int n,int val)
{
	int start=0;
        int end=n-1;
        int middle=0;
        while(start<=end)
        {
            middle=(start+end)/2;
       		if(A[middle]==val)
            {
                while(A[middle]==val&&middle>=0)
                  {
			cout<<middle<<" "<<A[middle]<<endl;
			middle--;
		  }  
                 return middle+1; 
            }
            else if(A[middle]<val)
                start=middle+1;
            else if(A[middle]>val)
                end=middle-1;
        }
        
       return -1;
}
int main()
{
	int a[5]={3,3,3,4,5};
	vector<int>num(a,a+5);
	cout<<binarysearch(num,5,4)<<endl;
	return 0;
}

