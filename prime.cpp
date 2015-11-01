#include<iostream>
#include<limits.h>
using namespace std;
struct graph
{
	int n;
	int matrix[7][7];
};
void prime(graph g,int* dis,int* pre)
{
	for(int i=0;i<g.n;i++)
	{
		if(g.matrix[i][0]>0)
		{
			pre[i]=0;
			dis[i]=g.matrix[i][0];
		}
		else
		{
			pre[i]=-1;
			dis[i]=INT_MAX;
		}
	}   //initialize
	dis[0]=0;
	pre[0]=0;
	int *used=new int[g.n];
	used[0]=1;
	int count=g.n;
	while(count)	
	{
		int temp=-1;
		int min=INT_MAX;
		for(int i=0;i<g.n;i++)
		{
			if(used[i]==0&&dis[i]<min)
			{
				min=dis[i];
				temp=i;
			}
		}
		used[temp]=1;
		if(temp!=-1)
		{
			for(int i=0;i<g.n;i++)
			{	
				if(used[i]==0&&g.matrix[temp][i]>0&&g.matrix[temp][i]<dis[i])
				{
					dis[i]=g.matrix[temp][i];
					pre[i]=temp;
				}
			}
		}
		count--;
	}
}
int main()
{
	graph g;
	g.n=7;
//	g.matrix={{0,2,4,1,-1,-1,-1},{2,0,-1,3,10,-1,-1},{4,-1,0,2,-1,5,-1},{1,3,2,0,7,8,4},{-1,10,-1,7,0,-1,6},{-1,-1,5,8,-1,0,1},{-1,-1,-1,4,6,1,0}};
	int matrix[7][7]={{0,2,4,1,-1,-1,-1},{2,0,-1,3,10,-1,-1},{4,-1,0,2,-1,5,-1},{1,3,2,0,7,8,4},{-1,10,-1,7,0,-1,6},{-1,-1,5,8,-1,0,1},{-1,-1,-1,4,6,1,0}};
	for(int i=0;i<7;i++)
		for(int j=0;j<7;j++)
			g.matrix[i][j]=matrix[i][j];

	int* dis=new int[g.n];
	int* pre=new int[g.n];
	prime(g,dis,pre);
	int total_dis=0;
	for(int i=0;i<g.n;i++)
	{
		total_dis+=dis[i];
		cout<<pre[i]<<" "<<dis[i]<<endl;
	}
	cout<<endl<<total_dis<<endl;
	return 0;
} 

















			
