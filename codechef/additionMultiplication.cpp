#include <bits/stdc++.h>

#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define sortv(v) sort(v.begin(),v.end());
#define sorta(a,n) sort(a,a+n);
#define arrayin(a,n) for(int i=0;i<n;i++) cin>>a[i];
#define arrayout(a,n) for(int i=0;i<n;i++) cout<<" ";cout<<"\n";
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
#define nl "\n"

typedef long long int lli;
typedef unsigned long long int ulli;
typedef double ld;

using namespace std;

struct lazyChoice
{
	char c;
	int ch1=0,ch2=1,ch3=0;
};

void build(int node, int start, int end,lli a[],vi64 &tree)
{
	
    if(start == end)
    	tree[node] = a[start];
    else
    {
        int mid = (start + end) / 2;
        build(2*node, start, mid,a,tree);
        build(2*node+1, mid+1, end,a,tree);
        tree[node] =(tree[2*node]+ tree[2*node+1]);
    }
}

int main()
{
	fio;
	int n,q;
	cin>>n>>q;
	lli a[n];
	REP(i,n) cin>>a[i];
	vi64 tree;
	REP(i,4*n)
		tree.pb(0);
	struct lazyChoice lazy[4*n];

	build(1,0,n-1,a,tree);
	while(q--)
	{
		int choice;
		cin>>choice;
		if(choice==1)
		{
			lli x,y,val;
			cin>>x>>y>>val;
			x--;y--;
			FOR(i,x,y)
			{
				update1(1,0,n-1,i,val,a,tree);
			}
		}
		else if(choice==2)
		{
			lli x,y,val;
			cin>>x>>y>>val;
			x--;y--;
			FOR(i,x,y)
				update2(1,0,n-1,i,val,a,tree);
		}
		else if(choice==3)
		{
			lli x,y,val;
			cin>>x>>y>>val;
			x--;y--;
			FOR(i,x,y)
				update3(1,0,n-1,i,val,a,tree);
		}
		else
		{
			lli x,y;
			cin>>x>>y;
			x--;
			y--;
			lli ans=query(1,0,n-1,x,y,tree);
			cout<<ans<<endl;
		}
	}
}