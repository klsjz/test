#include<iostream>
#include<vector>
using namespace std;
void solution(vector<int>value,int maxValue,int number)
{
	int count=0;
	int tem;
	for(int i=0;i<value.size()-number+1;i++)
	{
		tem=0;
		for(int j=i;j<i+number;j++)
			tem+=value[j];
		if(tem<=maxValue)
		count++;
	}
	cout<<count<<endl;

}
int main()
{
	int count,maxvalue,number;
	cin>>count>>maxvalue>>number;
	vector<int>value;
	int temp;
	for(int i=0;i<count;i++)
	{
		cin>>temp;
		value.push_back(temp);
	}

	solution(value,maxvalue,number);
	return 0;

}
