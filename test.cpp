#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int A[]={1,1,2,2,4,5,5,6};	
//	cout<<A<<endl;
	for (int i=0;i<8;)
		cout<<A[i++]<<" ";
	cout<<endl;
	cout<<distance(A,unique(A,A+8))<<endl;
	for(int i=0;i<5;i++)
		cout<<A[i];
	cout<<endl;
	vector<int> a;
	vector<int>::iterator new_end;
	for(int i=0;i<8;i++)
		a.push_back(A[i]);
	for (int i=0;i<8;)
		cout<<a[i++]<<" ";
	cout<<endl;
        new_end=unique(a.begin(),a.end());
//	cout<<new_end.begin()<<endl;

	a.erase(new_end,a.end());
	cout<<a.size()<<endl;
	for (int i=0;i<a.size();i++)
		cout<<a[i];
	cout<<endl;
	return 0;
}
