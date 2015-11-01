#include<iostream>
#include<map>
#include<set>
#include<string>
using namespace std;
int main()
{
	map<char,int>mymap;
	set<int>myset;
	string A="tfecdgfgt";
	int n=9;
	for(int i=0;i<n;i++)
           {
		
	     
             if(mymap.find(A[i])!=mymap.end())
                cout<< A[i]<<endl;
            else
            	mymap[A[i]]=1; 
            }
 
	
	return 0;
}
