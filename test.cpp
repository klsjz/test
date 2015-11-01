#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
typedef pair<int,int>Pair;
int main()
{
	int A[]={1,1,2,2,4,5,5,6};	
//	cout<<A<<endl;
	map<int,int>go;
	for (int i=0;i<8;i++)
{
		cout<<A[i]<<" ";
		
		go.insert(pair<int,int>(i,A[i]));
}
	cout<<endl<<go[3]<<" "<<go[5];		
	cout<<endl;
	cout<<distance(A,unique(A,A+8))<<endl;
	for(int i=0;i<5;i++)
		cout<<A[i];
	cout<<endl;
	vector<int> a;
	vector<int>::iterator new_end ,i;
	for(int i=0;i<8;i++)
		a.push_back(A[i]);
	for (int i=0;i<8;)
		cout<<a[i++]<<" ";
	cout<<endl;
        new_end=unique(a.begin(),a.end());
//	cout<<new_end.begin()<<endl;

	a.erase(new_end,a.end());
	cout<<a.size()<<endl;
//	for (int i=0;i<a.size();i++)
	for (i=a.begin();i!=a.end()-1;i++)
		cout<<*i<<" ";
	cout<<endl;
	return 0;
}
