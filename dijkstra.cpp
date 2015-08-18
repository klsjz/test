#include<iostream>
#include<limits.h>
#include<stack>
using namespace std;
struct graph
{
	int n;//vertex 
	int e;//edge
	int matrix[100][100];
};
void dikstrapath(graph g,int*dis,int*path,int v)
{
	int *visit=new int[g.n];
	for(int i=0;i<g.n;i++)
	{
		if(i!=v&&g.matrix[v][i]>0)
		{
			path[i]=v;
			dis[i]=g.matrix[v][i];
		}
		else
		{
			path[i]=-1;
			dis[i]=INT_MAX;
		}
		visit[i]=0;
	}
	path[v]=v;
	dis[v]=0;
	visit[v]=1;
	for(int i=0;i<g.n;i++)
	{
		int min=INT_MAX;
		int u;
		for(int j=0;j<g.n;j++)
		{
			if(visit[j]==0&&dis[j]<min)
			{
				min=dis[j];
				u=j;
			}
		}
		visit[u]=1;
		for(int j=0;j<g.n;j++)
		{
			if(visit[j]==0&&j!=u&&g.matrix[u][j]>0&&dis[u]+g.matrix[u][j]<dis[j])
			{
				dis[j]=dis[u]+g.matrix[u][j];
				path[j]=u;
			}
		}
	}
}
void showpath(int *path,int v,int v0)
{
	stack<int> s;
	int u=v;
	while(v!=v0)
	{
		s.push(v);
		v=path[v];
	}
	s.push(v0);
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
}
int main()
{
	graph g;
	g.n=5;
	g.e=7;
	int *path=new int[g.n];
	int *dis=new int[g.n];

	for(int i=0;i<100;i++)
		for(int j=0;j<100;j++)
			g.matrix[i][j]=0;
	g.matrix[0][1]=100;
	g.matrix[0][2]=30;
	g.matrix[0][4]=10;
	g.matrix[2][1]=60;
	g.matrix[2][3]=60;
	g.matrix[3][1]=10;
	g.matrix[4][3]=50;
	dikstrapath(g,dis,path,0);
	showpath(path,3,0);
	cout<<dis[3];
	return 0;
}



























