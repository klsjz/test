#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
#define POW(n) (int)pow(2,n)
#define N 4
string* gray(int n)
{
	string*gray_code=new string[1<<n];	
	if(n==1)
	{
		gray_code[0]="0";
		gray_code[1]="1";
	}
	else
	{
		string*temp=gray(n-1);
		for(int i=0;i<(1<<(n-1));i++)
		{	
			gray_code[i]="0"+temp[i];
			gray_code[(1<<n)-1-i]="1"+temp[i];
		}
		delete[]temp;
	}
	return gray_code;
}
int main()
{
	string*gray_code=gray(N);
	for(int i=0;i<(1<<N);i++)
		cout<<gray_code[i]<<" ";
	cout<<endl;
	delete[]gray_code;
	return 0;
}

