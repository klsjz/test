#include<iostream>
using namespace std;
#include<string>
int main()
{
	string s1,s2,s3;
	getline(cin,s1);
	getline(cin,s2);
	getline(cin,s3);
///	cin>>s1>>s2>>s3;
//	cout<<s1<<' '<<s2<<' '<<s3<<endl;
	for(int i=0;i<s1.length();i++)
	{
		if(s1[i]>'9'||s1[i]<'0'){cout<<1<<endl;return 0;}
	}
	for(int i=0;i<s2.length();i++)
	{
		if(s2[i]>'9'||s2[i]<'0'){cout<<1<<endl;return 0;}
	}
	
	for(int i=0;i<s3.length();i++)
	{
		if(s3[i]>'9'||s3[i]<'0'){cout<<1<<endl;return 0;}
	}
	if(s1.length()!=3&&s1.length()!=0){cout<<1<<endl;return 0;}
	if(s2.length()!=3||s2[0]=='0'){cout<<1<<endl;return 0;}
	if(s3.length()!=4){cout<<1<<endl;return 0;}
	cout<<0<<endl;
	return 0;
	
} 
