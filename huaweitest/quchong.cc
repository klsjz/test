#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	vector<int>number;
	int a;

	while(cin>>a)
	{

		number.push_back(a);
	}
	vector<int>::iterator it;
	while(1)
	{ 
		int j=0;
		for(it=number.begin();it<number.end()-2;it++)
		{
			if(*it==*(it+1)&&*it==*(it+2))
			{
				j=1;
				int temp=*it;
				it=number.erase(it);
				it=number.erase(it);
				it=number.erase(it);
				while(it!=number.end()&&*it==temp)
					it=number.erase(it);

			}	
		}
		if(j==0)
		break;
	}
	if(number.size()==0)return 0;
	for(it=number.begin();it!=number.end();it++)
	cout<<*it<<' ';
	cout<<endl;
	return 0;
}

