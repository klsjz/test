#include<iostream>
#include<limits.h>
#include<assert.h>
#include<vector>
#include<algorithm>
using namespace std;
#define first 1
#define second 2


int main()
{
	vector<int>fibo;
	fibo.push_back(0);
	fibo.push_back(1);
	fibo.push_back(1);
	for(int i=2;fibo[i] < INT_MAX;i++)
	{
		int temp = fibo[i] + fibo[i-1];
		fibo.push_back(temp);
		if(temp < 0)
			break;
	}
    int n;
    cin >> n;
	
		if((n < 2) || (abs(n) > INT_MAX))
		{
			cout << first << endl;
			return 0;
		}
		vector<int>::iterator find_index = find(fibo.begin(),fibo.end(),n);
		if(find_index != fibo.end())
			cout << second << endl;
		else
			cout << first << endl;
		fibo.clear();
	
    
    return 0;
}
