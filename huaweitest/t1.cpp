#include<iostream>
#include<limits.h>
#include<vector>
#include<algorithm>
using namespace std;
int x_min=INT_MAX;
int x_max=INT_MIN;
int y_min=INT_MAX;
int y_max=INT_MIN;
int main()
{
	int x,y;
	vector<int>mylist;
	mylist.push_back(10);
	mylist.push_back(20);
	mylist.push_back(20);
	mylist.push_back(20);
	for(auto i:mylist)
	cout<<i<<endl;
	cout<<mylist[0]<<' '<<mylist[1]<<endl;
	return 0;
}
