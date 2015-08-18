#include<iostream>
using namespace std;
#include<set>
#include<algorithm>
set<int>myset;
int main()
{
	myset.insert(1);
	myset.insert(2);
	set<int>::iterator it;
	for(it=myset.begin();it!=myset.end();it++)
	{
		cout<<*it<<endl;
	}
}
