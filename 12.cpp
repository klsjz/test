#include<iostream>
using namespace std;
#include<algorithm>
#include<map>
#include<set>
#include<string>
#include<limits>
#include <unordered_set>
int min_value=10000;

  void ladderRec(const string & start, const string & end, set<string> &dict,  int level)
 {  
        if( start==end) {  
            min_value = min(min_value, level+1);  
            return;  
        }  
       cout<<"start:"<<start<<"   ";
	cout<<endl<<"dict:";
	for(auto i:dict)
		cout<<i<<" ";
	cout<<endl;   
        set<string>unique;
          
        for(int i=0; i<start.size(); i++)
        {  
            string temp = start;  
            for(char c='a'; c<='z'; c++)
            { 
                if (temp[i]==c)continue;
                temp[i] = c; 
                if( dict.find(temp)!=dict.end() ) 
                {  
                    dict.erase(temp);
                    unique.insert (temp);
		if(temp==end)
			{min_value=level+1;return;}
                cout<<level<<":"<<temp<<"     "; 
                }  
            }  
        }  
        for(auto i=unique.begin();i!=unique.end();i++)
	{
		cout<<"unique:"<<*i<<endl<<"dict:";
		for(auto i:dict)
			cout<<i<<" ";
		cout<<endl;
            ladderRec(*i, end, dict, level+1); 
	 }
}

int main()
{
	string beginWord="game";
	string endWord="thee";
	string n[9]={"frye","heat","tree","thee","game","free","hell","fame","faye"};
	set<string>wordDict(n,n+9);
	if(wordDict.find(beginWord)!=wordDict.end())
		wordDict.erase(beginWord);
        ladderRec(beginWord, endWord, wordDict, 0);
	
	int i=min_value==10000? 0 : min_value;
	cout<<i<<endl;
	cout<<min_value<<endl;
return 0;  
}



