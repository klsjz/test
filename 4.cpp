/*Given an unsorted array of integers, find the length of the longest consecutive elements sequence.
For example, Given [100, 4, 200, 1, 3, 2] , e longest consecutive elements sequence is [1,
2, 3, 4] . Return its length: 4.
Your algorithm should run in O (n ) complexity
*/
#include<vector>
#include<iostream>
#include <tr1/unordered_map>
using namespace std;
int longest (vector<int>& num)
{
	std::tr1::unordered_map<int,bool>used;
	for (auto i:num)
	{used[i]=false;
//	cout<<i<<" " << endl;
	}
	int longest=0;
	for (auto i:num)
	{	
		if(used[i])continue;
		int length=1;
		used[i]=true;
		for(int j=i+1;used.find(j)!=used.end();++j)
		{
			used[j]=true;
			++length;
		}
		for(int j=i-1;used.find(j)!=used.end();--j)
		{
			used[j]=true;
			++length;
		}
		longest=(longest>length)?longest:length;
	}
	return longest;
}
		
int main()
{
       int num[7]={100,4,200,1,2,3,5};
       vector<int>  a(num,num+7);
	for (auto i:a)cout<<i<<endl;
	cout<<"the longest consecultive sequence length is:"<<longest(a)<<endl;
	return 0;
}
