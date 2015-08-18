#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cin.get();
	list<char>*mylist=new list<char>();
	char temp;
	cin.get(temp);
	while(temp!='\n')
	{
		if(temp!=' ')
		mylist->push_back(temp);
		cin.get(temp);
	}
	list<char>::iterator it=mylist->begin();
	while(mylist->size()>1)
	{
		for(int i=1;i<n;i++)
		{
			it++;
			if(it==mylist->end())
			   it=mylist->begin();
		}
		cout<<*it<<" ";
	        it=mylist->erase(it);
		if(it==mylist->end())
			it=mylist->begin();
	}
	cout<<*(mylist->begin())<<endl;
	return 0;
}
