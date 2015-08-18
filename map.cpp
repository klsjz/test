#include<iostream>
#include<map>
#include<set>
using namespace std;
int main()
{
	map<int,bool>mymap;
	set<int>myset;
	if(mymap[0])
		cout<<"i see you"<<endl;
	
	if(mymap[0])
		cout<<"i see you"<<endl;
	if(myset.find(0)!=myset.end())
		cout<<"set"<<endl;
	myset.insert(0);
	if(myset.find(0)!=myset.end())
		cout<<"set1"<<endl;
	return 0;
}
