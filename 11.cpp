#include<iostream>
#include<vector>
using namespace std;
int peaknum(vector<int>&num)
{
	for(int i=0;i<num.size();i++)
		if(num[i]>num[i-1]&&num[i]>num[i+1])
			return i;
}
int main()
{
	int n[2]={1,2};
	vector<int>num(n,n+2);
	num[-1]=-100;
	num[2]=-100;
	cout<<peaknum(num)<<endl;
	return 0;
}
