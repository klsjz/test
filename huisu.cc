/*
this program get a list,the number in the list is in range 1-9; 
写入三乘三网格里，可以满足横竖斜线加起来都等于15,找出所有满足条件的序列
*/
#include<iostream>
#include<algorithm>
#include<vector>
#include <math.h>
using namespace std;
vector<vector<int>>p;
bool used[9]={0};
bool check(int index,vector<int>temp,int i)
{
	if(index==0)return 1;
	if(index==1)return 1;
	if(index==2)
		if((temp[0]+temp[1]+i)==15)return 1;
		else return 0;
	if(index==5)
		if((temp[3]+temp[4]+i)==15)return 1;
		else return 0;
	if(index==6)
		if((temp[2]+temp[4]+i)==15&&(temp[0]+temp[3]+i)==15)return 1;
		else return 0;
	if(index==7)
		if((temp[1]+temp[4]+i)==15)return 1;
		else return 0;
	if(index==8)
		if((temp[2]+temp[5]+i)==15&&(temp[6]+temp[7]+i)==15&&(temp[0]+temp[4]+i)==15)return 1;
		else return 0;
	return 1;
}
	
void dfs(int k,vector<int>temp)
{
	if(k==9)
	{
		p.push_back(temp);
		return;
	}
	for(int i=1;i<10;i++)
	{
		if(used[i]==0&&check(k,temp,i))
		{
			temp.push_back(i);
			used[i]=1;
			dfs(k+1,temp);
			temp.pop_back();
			used[i]=0;
		}
		
	}
	return;
}
int main()
{
	vector<int>temp;
	dfs(0,temp);
	int j=0;
	for(auto i:p)
	{		
		for(auto j:i)
			cout<<j<<" ";
		cout<<endl;		
	}
	return 0;
}
		
	
