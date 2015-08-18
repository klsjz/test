#include<iostream>
using namespace std;
int main()
{
	char temp[10];
//	while(cin.get(temp,3))
	while(cin.getline(temp,3))
	cout<<endl<<temp<<endl;
	return 0;
}
