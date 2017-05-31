#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define MP make_pair
#define FR first
#define SE second
bool visited[8][8];
int level[8][8];
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
	visited[x1][x2]=true;
	queue<pair<int,int>> q;
	q.push(MP(x1,y1));
	level[x1][y1]=0;
	while(!q.empty())
	{
		int x=q.front().FR;
		int y=q.front().SE;
		q.pop();
		cout<<"Currently at "<<x<<" "<<y<<endl;
		if(x==x2&&y==y2)
			return level[x][y];
		cout<<"visited "<<endl;
		for(int i=0;i<8;i++)
		{
			int xx=x+row[i];
			int yy=y+col[i];
			if(valid(xx,yy))
			{
				cout<<xx<<" "<<yy<<endl;
				level[xx][yy]=level[x][y]+1;
				q.push(MP(xx,yy));
			}
		}
	}
	return -1;
}
int main()
{
	cout<<bfs(0,0,1,1)<<endl;
}