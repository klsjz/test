#include<iostream>
#include<algorithm>
using namespace std;
struct node
{
	int val;
	node* next;
};
bool cmp(int a,int b)
{
	return a<b;
}
int main()
{
	int n[6]={2,3,4,1,5,6};
	vector<int>num(n,n+6);
	for(auto i:num)
		cout<<i<<" ";
	cout<<endl;
	sort(num.begin(),num.end(),cmp);
	for(auto i:num)
		cout<<i<<" ";
	cout<<endl;
	pop_heap(num.begin(),num.end(),cmp);
	for(auto i:num)
		cout<<i<<" ";
	cout<<endl;
	num.pop_back();
	pop_heap(num.begin(),num.end(),cmp);
	for(auto i:num)
		cout<<i<<" ";
	cout<<endl;
	num.pop_back();
	pop_heap(num.begin(),num.end(),cmp);
	for(auto i:num)
		cout<<i<<" ";
	cout<<endl;

	return 0;
}

