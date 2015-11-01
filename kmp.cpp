#include<iostream>
#include<string>
#include<string.h>
using namespace std;
void get_next(string t,int *next)
{
	int i=0;
	int j=-1;
	int n=t.length();
	next[0]=-1;
	while(i<n-1)
	{
		if(t[j]==t[i]||j==-1)
		{
			j++;
			i++;
			next[i]=j;
		}
		else 
			j=next[j];
	}
}
int kmp(string s,string t)
{
	int i=0;
	int j=0;
        int sn=s.length();
        int tn=t.length();
	int* next=new int[tn];
	get_next(t,next);
	while(i<sn&&j<tn)
	{
		if(s[i]==t[j]||j==-1)
		{
			i++;
			j++;
		}
		else
		{	j=next[j];
			//cout<<j<<" ";
		}
	}
	if(j==tn)
		return i-tn;
	else
		return -1;
}
int main()
{
	string s,t;
	s="abcdfababaaaba";
	t="ababaaaba";
	cout<<kmp(s,t)<<endl;
	cout<<"strstr:"<<strstr(&s[0],&t[0])<<endl;
	int next[9]={0};
	get_next(t,next);
	for(int i=0;i<9;i++)
	cout<<next[i]<<endl;
	return 0;
}



	

