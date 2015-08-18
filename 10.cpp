/*2.1.21 Candy
描述
ere are N children standing in a line. Each child is assigned a rating value.
You are giving candies to these children subjected to the following requirements:
• Each child must have at least one candy.
• Children with a higher rating get more candies than their neighbors.
What is the minimum candies you must give?
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int candy(vector<int>&rating,int n)
{	
	vector<int>num(n);
	num[0]=1;
	for (int i=1,vcc=2;i<n;i++)
	{
		if(rating[i]>rating[i-1])
			num[i]=vcc++;
		else
		{vcc=2;num[i]=1;}
			
	}
	for(int i=n-2,vcc=2;i>=0;i--)
	{
		if(rating[i]>rating[i+1])
			num[i]=max(vcc++,num[i]);
		else
			vcc=2;
	}
	for(auto i :num)
	cout<<i<<" ";
	cout<<endl;
	return 0;
}
int main()
{
	int n[10]={1,3,5,5,6,9,8,7,6,5};
	
	vector<int>rating(n,n+10);
	cout<<"the rating is:";
	for(auto i:rating)
	cout<<i<<" ";
	cout<<endl;
	candy(rating,10);
	return 0;
}
