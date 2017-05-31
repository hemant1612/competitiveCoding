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
#define fr first
#define se second
bool visited[10001];
int dist[10001];
lli bfs(int n,int m)
{
	queue<lli> q;
	q.push(n);
	visited[n]=true;
	while(!q.empty())
	{
		lli x=q.front();
		q.pop();
		if(x==m)
			return dist[x];
		if(!visited[x-1] && x-1>=1)
		{
			q.push(x-1);
			visited[x-1]=true;
			dist[x-1]=dist[x]+1;
		}
		if(!visited[x*2] && x*2<10001)
		{
			q.push(x*2);
			visited[x*2]=true;
			dist[x*2]=dist[x]+1;
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,m;
	cin>>n>>m;
	int ans=bfs(n,m);
	cout<<ans<<endl;
}