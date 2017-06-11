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
#include <cstring> //memset
#include <set>
#include <unordered_set>
typedef long long int lli;
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define INF INT_MAX //Infinity
#define mp make_pair
#define pb push_back
#define mt make_tuple
#define MOD 1000000007
#define fi first
#define se second
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<pair<int,int>>
#define viii vector<tuple<int,int,int>>
#define mii map<int,int>
vector<int> v[200000];
int level1[200000];
int level2[200000];
bool visited1[200000];
bool visited2[200000];
void findLevel1(int s)
{
	visited1[s]=true;
	queue<int> q;
	q.push(s);
	level1[s]=0;
	while(!q.empty())
	{
		int node=q.front();
		q.pop();
		for(int i=0;i<v[node].size();i++)
		{
			if(visited1[v[node][i]]==false)
			{
				visited1[v[node][i]]=true;
				q.push(v[node][i]);
				level1[v[node][i]]=level1[node]+1;
			}
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,x;
	cin>>n>>x;
	FOR(i,1,n-1)
	{
		int a,b;
		cin>>a>>b;
		v[a].pb(b);
		v[b].pb(a);
	}
	int max=0;
	findLevel1(1);
	int maxN=0;
	REP(i,n)
	{
		if(level1[i]>max)
		{
			max=level1[i];
			maxN=i;
		}
	}
	if(v[x].size()==1)
	{
		cout<<
	}
	else 
	{
		cout<<2*(max-level1[x]+)
	}
}