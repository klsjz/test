#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n,m;
	char c;
	vector<int>num;
	while(c!=';')
	{
		num.push_back((int)(c-'0'));
		cout<<c<<" ";
		cin>>c;
	}
	cout<<endl;
	m=num.size();
	while(cin>>c)
	{
		if(c!=';')
		num.push_back((int)(c-'0'));
	}	

	n=num.size()/m;
	cout<<n<<" "<<n<<endl;
	int max=-10000;
	int sum=0;
/*	for(int i=0;i<n-1;i++)
		for(int j=0;j<m-1;j++)
		{
			sum=0;
			sum+=num[i][j];
			sum+=num[i][j+1];
			sum+=num[i+1][j];
			sum+=num[i+1][j+1];
			if(sum>max)
				max=sum;
		}
	cout<<sum<<endl;*/
}
