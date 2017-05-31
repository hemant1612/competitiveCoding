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
typedef long long int lli;
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define INF INT_MAX //Infinity
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define fi first
#define se second
bool visited[25][25];
int bfs(int a,int b,int n)
{
	REP(i,n)
	{
		REP(j,n)
			visited[i][j]=false;
	}
	queue<pair<pair<int,int>,int>> q;
	q.push(mp(mp(0,0),0));
	visited[0][0]=true;
	while(!q.empty())
	{
		pair<pair<int,int>,int> p=q.front();
		int x=p.fi.fi;
		int y=p.fi.se;
		q.pop();
		//cout<<"searching with "<<x<<" "<<y<<endl;
		//gota add a statement over here!
		if(x==n-1&&y==n-1)
			return p.se;
		int moves=p.se;
		if(!visited[x+a][y+b] && x+a<n && y+b<n)
		{
			q.push(mp(mp(x+a,y+b),moves+1));
			visited[x+a][y+b]=true;
		}
		if(!visited[x+a][y-b] && x+a<n && y-b>=0)
		{
			q.push(mp(mp(x+a,y-b),moves+1));
			visited[x+a][y-b]=true;
		}
		if(!visited[x-a][y+b] && x-a>=0 && y+b<n)
		{
			q.push(mp(mp(x-a,y+b),moves+1));
			visited[x-a][y+b]=true;
		}
		if(!visited[x-a][y-b] && x-a>=0 && y-b>=0)
		{
			q.push(mp(mp(x-a,y-b),moves+1));
			visited[x-a][y-b]=true;
		}
		swap(a,b);
		if(!visited[x+a][y+b] && x+a<n && y+b<n)
		{
			q.push(mp(mp(x+a,y+b),moves+1));
			visited[x+a][y+b]=true;
		}
		if(!visited[x+a][y-b] && x+a<n && y-b>=0)
		{
			q.push(mp(mp(x+a,y-b),moves+1));
			visited[x+a][y-b]=true;
		}
		if(!visited[x-a][y+b] && x-a>=0 && y+b<n)
		{
			q.push(mp(mp(x-a,y+b),moves+1));
			visited[x-a][y+b]=true;
		}
		if(!visited[x-a][y-b] && x-a>=0 && y-b>=0)
		{
			q.push(mp(mp(x-a,y-b),moves+1));
			visited[x-a][y-b]=true;
		}
	}
	return -1;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    FOR(i,1,n-1)
    {
    	FOR(j,1,n-1)
    	{
    		cout<<bfs(i,j,n)<<" ";
    	}
    	cout<<endl;
    }
}