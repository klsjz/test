#include<iostream>
#include<map>
#include<algorithm>
#include<math.h>
int p(int a)
{
	int result=1;
	while (a)
	{
		result*=10;
		a--;
	}
	return result;
}
		
using namespace std;
int main()
{
	int x;
	map<int,int>mymap;
	cin>>x;
	int y=x;
	int i=0;
	while(y)
	{
		i++;
		y/=10;
	}
	if(i<3||i>9){ cout<<0<<endl;return 0;}
	int j=i;
	for(int index=0;index<i;index++)
	{
		for(int n=2;n<=j;n++)
		{
			int temp=x/p(j-n);
			if(mymap.find(temp)==mymap.end())
				mymap[temp]=1;
			else
				{cout<<1;return 0;}
		}
		x=x-(int)(x/p(j-1))*p(j-1);
//		cout<<"x:"<<x<<endl;
		--j;
	}
	cout<<0;
	return 0;
}
	
		
