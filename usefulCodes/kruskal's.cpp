#include <bits/stdc++.h>

#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define sortv(v) sort(v.begin(),v.end());
#define sorta(a,n) sort(a,a+n);
#define arrayin(a,n) for(int i=0;i<n;i++) cin>>a[i];
#define arrayout(a,n) for(int i=0;i<n;i++) cout<<" ";cout<<"\n";
#define whatIs(x) cout<<#x<<" is "<<x<<endl;
#define fillA(a,value) memset(a,value,sizeof(a));
#define len(s) s.length()
#define reached cout<<"reached "<<endl;
#define INF INT_MAX //Infinity
#define mp make_pair
#define pb push_back
#define mt make_tuple
#define MOD 1000000007
#define fi first
#define se second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define vi64 vector<lli>
#define viii vector<tuple<int,int,int>>
#define prq priority_queue<int>
#define mii map<int,int>
#define msi multiset<int>
#define nl "\n"
#define sii set<int,int>
#define sz size

typedef long long int lli;
typedef unsigned long long int ulli;
typedef double ld;

using namespace std;

/*
	Basic idea of kruskals algo.
	Greedily pick up edges from the graph which have the minimum edge length.
	Check if the edge we are adding is not creating a cycle, if not then add it to the group
	Keep on doing this till you have added n-1 edges or all the edges.

	For checking if there is a cycle or not we use union find.
		to check if the two vertices of the new edge that we are going to add are in the same group or not we use the find operation. It runs in O(1).
		to add the edge we take O(1).
		to join the two groups into 1 we need to rewire all the pointers of one group into the other.
		We will only rewire the pointers of the smaller groups to the larger group.
		Overall this will take O(log(n)). 
			Example- If we have a group of 20 nodes then we'll rewire all these 20 to a group of 20 or larger.
				By this logic we rewire only to groups larger than more than double the size. Therefore the total number of operarions that are needed is O(logbase2(n))
*/

const int MAX=1e4+5; //max number of edges that are possible.EDGES REMEMBER
int id[MAX],nodes,edges; 
pair<lli,ii> p[MAX]; //we'll store our data like this. The edge weight first as we need to sort this. The 2 nodes connecting it later.

void initialize()
{
	REP(i,MAX) id[i]=i;
}

int root(int x)
{
	while(id[x]!=x)
	{
		id[x]=id[id[x]];
		x=id[x];
	}
	return x;
}

void unionOp(int x,int y)
{
	int p=root(x);
	int q=root(y);
	id[p]=id[q];
}

lli kruskals(pair<lli,ii>p[])
{
	int x,y;
	lli cost,minimumCost=0;
	REP(i,edges)
	{
		//we select the edges one by one from the beginning.
		x=p[i].se.fi;
		y=p[i].se.se;
		cost=p[i].fi;
		//if there are no cycles then add it to the graph and join the two groups
		if(root(x)!=root(y))
		{
			minimumCost+=cost;
			unionOp(x,y);
		}
	}
	return minimumCost;
}
int main()
{
	fio;
	int x,y;
	lli weight,cost,minimumCost;
	initialize();
	cin>>nodes>>edges;
	for(int i=0;i<edges;i++)
	{
		cin>>x>>y>>weight;
		p[i]=mp(weight,mp(x,y));
	}
	sort(p,p+edges);
	minimumCost=kruskals(p);
	cout<<minimumCost<<endl;

	return 0;
}