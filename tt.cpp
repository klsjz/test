#include<iostream>
#include<algorithm>
#include<map>
#include<time.h>
#include <tr1/unordered_map>
int randinrange(int start,int end)
{
	return start+rand()%(end-start+1);
}
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
	int A[]={0,1};
	cout<<A[0]<<A[1]<<endl;
	swap(A[0],A[1]);
	cout<<"swap"<<A[0]<<A[1]<<endl;
//	srand(time(0));
	cout<<nn<<endl;
	cout<<"rand:"<<randinrange(1,5)<<endl;
	cout<<"rand:"<<randinrange(1,5)<<endl;
	cout<<"rand:"<<randinrange(1,5)<<endl;
	cout<<"rand:"<<randinrange(1,5)<<endl;
	cout<<"rand:"<<randinrange(1,5)<<endl;
	cout<<"fibolaqie:"<<f(5)<<endl;
	return 0;
}
