#include<iostream>
using namespace std;
#include<string>
int main()
{
	//char* s1,s2,s3;
	string s1,s2,s3;
	getline(cin,s1);
	getline(cin,s2);
	getline(cin,s3);
//	cin.getline(s2);
//	cin.getline(s3);
	cout<<s1<<'\t'<<s2<<' '<<s3;
	cout<<endl;
	return 0;
}
	
