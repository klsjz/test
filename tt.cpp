#include<iostream>
#include<algorithm>
#include<map>
#include <tr1/unordered_map>
using namespace std;
int f(int n)
{
	if (n==0)return 0;
	else if(n==1)return 1;
	else 
	return f(n-1)+f(n-2);
	
}
int main()
{
	std::tr1::unordered_map<int,int>test;
	pair<int,int>item(1,0);
	test.insert(item);
	cout<<test[1]<<endl;
	cout<<test.count(1)<<endl;
	int nn=max(1,2);

	cout<<nn<<endl;
	cout<<"fibolaqie:"<<f(5)<<endl;
	return 0;
}
