#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <numeric> //accumulate for vector
#include <iomanip> //cout<<setprecision(1)<<fixed;
#include <climits> //limits like Infinity
#include <cstring>
typedef long long int lli;
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define INF INT_MAX //Infinity
#define MP make_pair
#define PB push_back
#define MOD 1000000007
#define FR first
#define SE second
bool visited[8][8];
int cost[8][8];
int row[]={2,2,-2,-2,1,1,-1,-1};
int col[]={-1,1,1,-1,2,-2,2,-2};
bool valid(int x,int y)
{
	if(x<0||y<0||x>=8||y>=8)
		return false;
	return true;
}
int bfs(int x1,int y1,int x2,int y2)
{
	memset(cost,1000000,sizeof(cost[0][0])*64);
	memset(visited,false,sizeof(visited[0][0])*64);
	visited[x1][x2]=true;
	queue<pair<int,int>> q;
	q.push(MP(x1,y1));
	cost[x1][x2]=0;
	int flag=1;
	while(!q.empty())
	{
		int x=q.front().FR;
		int y=q.front().SE;
		q.pop();
		if(flag==1)
			flag=0;
		else
		{
			if(visited[x][y])
				continue;
		}
		if(x==x2&&y==y2)
			return cost[x][y];
		for(int i=0;i<8;i++)
		{
			int xx=x+row[i];
			int yy=y+col[i];
			if(valid(xx,yy))
			{
				if(cost[xx][yy]>cost[x][y]+xx*x+yy*y)
					cost[xx][yy]=cost[x][y]+xx*x+yy*y;
				q.push(MP(xx,yy));
			}
		}
	}
	return -1;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	while(!cin.eof())
	{
		int x1,x2,y1,y2;
		cin>>x1>>y1>>x2>>y2;
		int ans=bfs(x1,y1,x2,y2);
		cout<<ans<<endl;
	}
}