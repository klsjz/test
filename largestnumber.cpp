#include<iostream>
#include<iterator>
#include<algorithm>
#include<string>
using namespace std;
    bool isbig(vector<int>&A,vector<int>&B)
    {
        if(B.size()==0)
        return true;
        if(A.size()==0)return false;
	cout<<"A:";
	for(auto i:A)
		cout<<i<<" ";
	cout<<endl<<"B:";
	for(auto i:B)
		cout<<i<<" ";
	cout<<endl;
        auto i=A.rbegin();
        auto j=B.rbegin();
        while(i!=A.rend()&&j!=B.rend())
        {
            if(*i>*j){cout<<"yes"<<endl;return true;}
            i++;
            j++;
        }
        if(i==A.rend()&&j==B.rend())
        return false;
        else if(i==A.rend())
        {
            vector<int>c(B.begin(),B.end()-A.size());
            return isbig(A,c);
        }
        else
        {
            vector<int>c(A.begin(),A.end()-B.size());
            return isbig(c,B);
        }
    }



   vector<int>::iterator findmax(vector<int>&nums)
    {
  
        vector<int>max;
        
        vector<int>::iterator j;
        for(auto it=nums.begin();it!=nums.end();it++)
        {
            vector<int>th;
            int temp=*it;
            while(temp>=10)
            {
               th.push_back(temp%10);
                 temp/=10;
            }
            th.push_back(temp);
            if(isbig(th,max))
            {
                max=th;
		cout<<"max:";
		for(auto i:max)
			cout<<i<<" ";
		cout<<endl;
                j=it;
            }
        }
	cout<<*j<<"**"<<endl;
        return j;
    }

    string largestNumber(vector<int>& nums) 
     {
        string number;
        while(nums.size()>0)
        {
        auto temp =findmax(nums);
        char t[100];
        sprintf(t,"%d",*temp);
        number+=t;
        nums.erase(temp);
        }
        return number;
    }
int main()
{
	vector<int>nums;
	nums.push_back(20);
	nums.push_back(1);
	string xx=largestNumber(nums);
	cout<<xx<<endl;




}
