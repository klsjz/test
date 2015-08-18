#include<iostream>
#include<string>
#include<list>
#include<algorithm>
using namespace std;
string s1,s2;
int main()
{
	cin>>s1>>s2;
	list<char>mylist;
	char temp;
	int i=0;
	int length1=s1.length();
	int length2=s2.length();
	for(int i=0;i<length1;i++)
		if(s1[i]>'9'||s1[i]<'0')
			return 0;
	for(int i=0;i<length2;i++)
		if(s2[i]>'9'||s2[i]<'0')
			return 0;

	while(length1>0&&length2>0)
	{
		temp=s1[length1-1]-'0'+s2[length2-1]+i;
		i=0;
		if(temp>('9'))
		{
			temp-=10;
			i=1;
		}
		length1--;
		length2--;
		mylist.push_front(temp);
	}
	while(length1>0)
	{
		temp=s1[length1-1]+i;
		i=0;
		if(temp>('9'))
                {       
                        temp-=10;
                        i=1;
                }
		length1--;
		mylist.push_front(temp);
	}
	while(length2>0)
	{
                temp=s2[length2-1]+i;
                i=0;
                if(temp>('9'))
                {
                        temp-=10;
                        i=1;
                }
                length2--;
                mylist.push_front(temp);
	}
	if(i==1)
	mylist.push_front('1');
	list<char>::iterator it;
	for(it=mylist.begin();it!=mylist.end();it++)
	cout<<*it;
	cout<<endl;
	return 0;
}

				
