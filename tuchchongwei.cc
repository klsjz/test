#include<iostream>
using namespace std;
int solution(int *num,int m,int n,int M,int N)
{
	if(m>M||n<0)return 0;
	if(m==M&&n==0)return 1;
	if(num[m*N+n]==0){
//		cout<<"i see you"<<endl;
		return 0;
	}
	else return solution(num,m,n-1,M,N)+solution(num,m+1,n-1,M,N)+solution(num,m+1,n,M,N);
}
int main()
{
	int m;
	int n;
	cin>>m>>n;
	int *num=new int[m*n];
	int **p=&num;
//	p[0][0]=0;
	for(int i=0;i<m*n;i++)
		cin>>num[i];
	cout<<p[2][2]<<endl;

//	cout<<num[1*3+1]<<endl;
//	cout<<solution(num,2,0,m-1)<<endl;
//	cout<<solution(num,2,1,m-1)<<endl;
//	cout<<solution(num,1,0,m-1)<<endl;
//	cout<<solution(num,0,0,m-1)<<endl;
//	cout<<solution(num,1,1,m-1,n)<<endl;
//	cout<<solution(num,0,1,m-1)<<endl;
	cout<<solution(num,0,n-1,m-1,n)<<endl;
}
