/*2.1.11 Next Permutation
描述
Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.
If such arrangement is not possible, it must rearrange it as the lowest possible order (ie, sorted in
ascending order).
e replacement must be in-place, do not allocate extra memory.
Here are some examples. Inputs are in the le-hand column and its corresponding outputs are in the
right-hand column.
1,2,3 → 1,3,2
3,2,1 → 1,2,3
1,1,5 → 1,5,1
*/
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
vector<int> NextPermutation(vector<int>&num)
{
	int i,j;
	for(i=num.size()-2;i>=0;i--)if(num[i]<num[i+1])break;
	for(j=num.size()-1;j>0;j--)if(num[j]>num[i])break;
	if(i>=0)swap(num[i],num[j]);
	reverse(num.begin()+i+1,num.end());
	return num;
}
int main()
{	
	int N[6]={6,8,7,4,3,2};
	vector<int>num(N,N+6);
//	reverse(num.begin()+3,num.end());
	NextPermutation(num);
	for(auto i:num)
		cout<<i<<" ";
	cout<<endl;
	string reg="";
	reg+=('0',num[1]);
	cout<<reg<<endl;
	return 0;
	
}
