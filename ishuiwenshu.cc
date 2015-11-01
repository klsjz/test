#include<iostream>
#include<string>
using namespace std;
int ishuiwen(string s)
{
	int i,j;
	int flag=0;
	i=0;
	j=s.length()-1;
	while(i<=j)
	{
		if(s[i]==s[j])
		{
			i++;
			j--;
		}
		else if(s[i]!=s[j]&&flag==0)
		{
			flag=1;
			i++;
		}
		else
			return 0;
	}
	return 1;
}
int ishuiwen1(string s)
{
        int i,j;
        int flag=0;
        i=0;
        j=s.length()-1;
        while(i<=j)
        {
                if(s[i]==s[j])
                {
                        i++;
                        j--;
                }
                else if(s[i]!=s[j]&&flag==0)
                {
                        flag=1;
                        j--;
                }
                else
                        return 0;
        }
        return 1;
}
int main()
{
	string s;
	cin>>s;
	if(ishuiwen(s)||ishuiwen1(s))
		cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}
