#include<iostream>
#include<string>
#include<string.h>
using namespace std;
void printall(char *number,int length,int index);
void printtotalofdigitals(int n)
{
	if(n<=0)return;
	char *number=new char[n+1];
	number[n]='\0';
//	for(int i=0;i<10;i++)
//	{
//		number[0]=i+'0';
		printall(number,n,-1);
//	}
	delete []number;
}
void print(char *number)
{
	bool isbeginning=true;
	int length=strlen(number);
	for(int i=0;i<length;i++)
	{
		if(number[i]!='0')
			isbeginning=false;
		if(!isbeginning)
			cout<<number[i];
	}
	cout<<" ";
	return;
}
void printall(char *number,int length,int index)
{
	if(index==length-1)
	print(number);
	else
	{	
		for(int i=0;i<10;i++)
		{
			number[index+1]=i+'0';
			printall(number,length,index+1);
		}
		
	}
}
int main()
{
	printtotalofdigitals(3);
	return 0;
}
