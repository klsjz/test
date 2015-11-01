#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a,b;
	int result=0;
	int max=0;
	while(n)
	{
	cin>>a>>b;
	result-=a;
	result+=b;
//	cout<<result<<endl;
	if(result>max)max=result;
        n--;	
	}
	cout<<max<<endl;
}
	
