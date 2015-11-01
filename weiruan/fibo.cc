#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int fibo[100];
int result=0;
void dfs(vector<int>num,int index,int n)
{
	if(index>=num.size())return;
	if(num.size()==0)return;
	
	for(int i=index;i<num.size();i++)
	{
		if(num[i]==fibo[n])
		{
			result++;
			if(result>1000000007)
				result=result%1000000007;
//			cout<<"i:"<<i<<" "<<"n:"<<n<<" ";
			dfs(num,i+1,n+1);
		}
	}
	return;
}
int main()
{
	fibo[1]=1;
	fibo[0]=1;
	for(int i=2;i<30;i++)
	{
		fibo[i]=fibo[i-1]+fibo[i-2];
	}
//	for(int i=0;i<30;i++)
//	cout<<fibo[i]<<" ";
//	cout<<endl;
	int n,temp;
	cin>>n;
	vector<int>num;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		num.push_back(temp);
	}
	dfs(num,0,0);
	cout<<result<<endl;
	return 0;
}
