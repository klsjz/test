#include<iostream>
#include<string>
using namespace std;
int find(string t,int index)
{
    for(int i=index;i>=0;i--)
    {
        if(t[i]=='(')return i;
        
    }
    return -1;

}
bool isorno(string h)
{
	if(h.length()==0)
	return 0;
    if(h.length()==1)
    {
	if(h[0]=='1'||h[0]=='0')
		return 1;
	else return 0;
    }
    for(int i=0;i<h.length();i++)
	{
		if(h[i]=='|')
		return isorno(h.substr(0,i))&&isorno(h.substr(i+1,h.length()-1-i));
	}
    char temp=h[h.length()-1];
    if(temp=='1'||temp=='0'||temp=='*'||temp=='|')
        return isorno(h.substr(0,h.length()-1));
    if(temp==')')
    {
        int index=find(h,h.length()-1);
        if(index==-1)
            return 0;
	if(index==0)
	    return isorno(h.substr(index+1,h.length()-index-2));
	else
        return isorno(h.substr(index+1,h.length()-index-2))&&isorno(h.substr(0,index));      
    }

    return 0;
}
int main()
{
    string input;
    cin>>input;
    if(isorno(input))
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
    return 0;
    
}

