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
typedef long long ll;
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
vector<int> v[1];
bool visited[1];
int level[1];
void dfs(int s)
{
	stack<int> st;
	st.push(s);
	visited[s]=true;
	for(int i=0;i<v[s].size();i++)
	{
		if(visited[v[s][i]]==false)
			dfs(v[s][i]);
	}
}
void bfs(int s)
{
	queue<int> q;
	q.push(s);
	visited[s]=true;
	level[s]=0;
	while(!q.empty())
	{
		int node=q.front();
		q.pop();
		for(int i=0;i<v[node].size();i++)
		{
			if(visited[v[node][i]]==false)
			{
				visited[v[node][i]]=true;
				q.push(v[node][i]);
				level[v[node][i]]=level[node]+1;
			}
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s="01101001100101101001011001101001100101100110100101101001100101101001011001101001011010011001011001101001100101101001011001101001100101100110100101101001100101100110100110010110100101100110100101101001100101101001011001101001100101100110100101101001100101101001011001101001011010011001011001101001100101101001011001101001011010011001011010010110011010011001011001101001011010011001011001101001100101101001011001101001100101100110100101101001100101101001011001101001011010011001011001101001100101101001011001101001";
		int n;
		cin>>n;
		cout<<s.at(n)<<endl;
	}
}