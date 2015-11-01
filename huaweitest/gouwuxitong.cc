#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
	int a1[2]={2,5};
	int a2[2]={3,10};
	int a3[2]={4,14};
	int p1=5;
	int p2=5;
	int p3=3;
	string input;
	int jiage=0;
	int touru=0;
	while(cin>>input)
	{
	   	if(input[0]=='A'&&input[1]=='1')
		{
			jiage+=2;
			a1[1]--;
		}
	   	if(input[0]=='A'&&input[1]=='2')
		{
			jiage+=3;
			a2[1]--;
		}
	   	if(input[0]=='A'&&input[1]=='3')
		{
			jiage+=4;
			a3[1]--;
		}
		if(input[0]=='5')
		{
			touru+=5;
			p3++;
		}
		if(input[0]=='2')
		{
			touru+=2;
			p2++;
		}
		if(input[0]=='1')
		{
			touru+=1;
			p1++;
		}
	}
	int zhaoling=touru-jiage;
	while(zhaoling>=5&&p3>0)
	{
		zhaoling-=5;
		p3--;
	}
	while(zhaoling>=2&&p2>0)
	{
		zhaoling-=2;
		p2--;
	}
	while(zhaoling>=1&&p1>0)
	{
		zhaoling--;
		p1--;
	}
	cout<<"A1"<<" "<<a1[1]<<","<<"A2"<<" "<<a2[1]<<","<<"A3"<<" "<<a3[1]<<";"<<"1"<<" "<<p1<<","<<"2"<<" "<<p2<<","<<"5"<<" "<<p3<<endl;	
		return 0;
}
	
