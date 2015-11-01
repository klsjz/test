#include<iostream>
#include<math.h>
#include<stack>
#include<queue>
using namespace std;
int main()
{	
	double result;
	for(int i=5;i<100;i++)
	result+=i/pow(5,i);
	stack<int>tem;
	queue<int>tt;
	tem.push(3);
	tt.push(3);
	cout<<tt[0]<<endl;
	cout<<tem[0]<<endl;
	cout<<result*120<<endl;
}
