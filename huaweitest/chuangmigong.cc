#include<iostream>
using namespace std;
int used[100][100];
int find(int i,int j,int *num[],int d,int n)
{
	n++;
	cout<<"it is"<<i<<" "<<j<<" "<<n<<endl;
	if(i==d-1&&j==d-1)
		cout<<n<<" ";
	if(num[i][j]==1||used[i][j]==1)return -1;
	if(i<0||j<0||i>=d||j>=d)return 0;
	cout<<"iiiii"<<endl;
	if(i-1<d&&i-1>=0)
	{
		used[i-1][j]=1;
		find(i-1,j,num,d,n);
		used[i-1][j]=0;
	}

	if(i+1<d&&i+1>=0)
	{
		used[i+1][j]=1;
		find(i+1,j,num,d,n);
		used[i+1][j]=0;
	}

	if(j-1<d&&j-1>=0)
	{
		used[i][j-1]=1;
		find(i,j-1,num,d,n);
		used[i][j-1]=0;
	}
	
	if(j+1<d&&j+1>=0)
	{
		cout<<"ha ha"<<endl;
	
		used[i][j+1]=1;
		find(i,j+1,num,d,n);
		used[i][j+1]=0;
	}
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<100;i++)
		for(int j=0;j<100;j++)
			used[i][j]=0;
	int **num=new int*[n];
	for(int i=0;i<n;i++)
		num[i]=new int[n];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		  cin>>num[i][j];
	num[0][0]=0;
	if(num[n-1][n-1]==1)
		cout<<-1<<" ";
	else
	{
		cout<<"i see you"<<endl;
		find(0,0,num,n,-1);
	}
	return 0;
}
