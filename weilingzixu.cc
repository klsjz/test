#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int sum=0;
	int a;
	int max=-1;
	vector<int>num;
	vector<int>temp;
	vector< vector<int> >result;
	while(cin>>a)
	num.push_back(a);
	for(int i=0;i<=num.size()-1;i++)
	{
		sum=0;
		temp.clear();
		for(int j=i;j<num.size();j++)
		{
			sum+=num[j];
			temp.push_back(num[j]);
			cout<<"sum:"<<sum<<" ";
			cout<<"temp:"<<temp.size()<<" "<<endl;
			if((sum==0)&&(temp.size()>max))
			{
				cout<<"i see you"<<endl;
				result.pop_back();
				result.push_back(temp);
				max=temp.size();
			}
		}
	}
	vector< vector<int> >::iterator it;
	it=result.begin();	
//	for(int i;i<(*it).size();i++)
//		cout<<(*it)[i]<<" ";
        for(auto i:result)
        {
                for(auto j:i)
                        cout<<j<<" ";
                cout<<endl;
        }
	return 0;
}
