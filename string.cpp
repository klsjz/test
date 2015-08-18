#include<iostream>
using namespace std;
#include<string>
int main()
{
	string s1="abcdefg";
	string s2("abd");
	cout<<s1<<" "<<s2<<endl;
	int i=s1.find(s2);
	cout<<i<<endl;
	if(i==string::npos)
		cout<<"i see you"<<endl;
	return 0;
}
