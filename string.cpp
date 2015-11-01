#include<iostream>
using namespace std;
#include<string>
int main()
{
	string s1="1234567";
	string s2("abd");
	string s3=s1.substr(1,2);
	
	cout<<s1<<" "<<s2<<endl;
	cout<<"s3:"<<s3<<endl;
	int i=s1.find(s2);
	cout<<i<<endl;
	if(i==string::npos)
		cout<<"i see you"<<endl;
	return 0;
}
