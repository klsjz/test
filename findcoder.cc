#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<vector>

using namespace std;
struct b
{
	string theT;
	int theJ;
	int theIt;
	b(string t,int j,int it1):theT(t),theJ(j),theIt(it1){};
};
bool compare(b b1,b b2)
{
	if(b1.theJ>b2.theJ)
		return 0;
	else if(b1.theJ<b2.theJ)
		return 1;
	else if(b1.theIt<b2.theIt)
		return 1;
	else return 0;
}
int main()
{
	vector<string>A;
	vector<b>output;
	string temp;
//	while(cin>>temp)
		A.push_back("coder");
		A.push_back("wcodercoder");
		A.push_back("codercodercoder");
		A.push_back("wcodercoder2");
		A.push_back("temp");
//		A.push_back(temp);
	vector<string>::iterator it;
	int it1;
	for(it=A.begin(),it1=0;it!=A.end();it++,it1++)
	{
		int j=0;
		int i=(*it).find("coder");
		string a=(*it);
		while(i!=string::npos)
		{
//			cout<<i<<endl;
		        a=a.substr(0,i)+a.substr(i+5,a.length()-i-5);
	//			cout<<a<<endl;
			j++;
			i=a.find("coder");
		}
		cout<<j<<endl;
		output.push_back(b(*it,j,it1));
	}
	sort(output.begin(),output.end(),compare);
	vector<b>::iterator i;
	for(i=output.begin();i!=output.end();i++)
		cout<<i->theT<<" ";
	cout<<endl;
	return 0;
}
