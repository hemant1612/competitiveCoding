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

void build(lli node, lli start, lli end,lli a[],vi &tree)
{
    if(start == end)
    {
        tree[node] = a[start];
    }
    else
    {
        lli mid = (start + end) / 2;
        // Recurse on the left child
        build(2*node, start, mid,a,tree);
        // Recurse on the right child
        build(2*node+1, mid+1, end,a,tree);
        // lliernal node will have the sum of both of its children
        tree[node] = max(tree[2*node], tree[2*node+1]);
    }
}
lli query(lli node,lli start,lli end,lli l,lli r,vi &tree)
{
	if(r<start or end<l)
	{
		//range represented is completely outside the given range
		return -1*INF;
	}
	if(l<=start&&end<=r)
	{
		//range represented is completely inside the given range
		return tree[node];
	}
	//range represented is partially inside and partially outside the given range
	lli mid=(start+end)/2;
	lli p1=query(2*node,start,mid,l,r,tree);
	lli p2=query(2*node+1,mid+1,end,l,r,tree);
	return (max(p1,p2));
}

int main()
{
	fio;
	/*lli t;
	cin>>t;
	while(t--)
	{
		lli n;
		cin>>n;
	}*/
	lli n;
	cin>>n;
	lli a[n];
	REP(i,n) cin>>a[i];
	vi tree;
	REP(i,4*n)
	{
		tree.pb(0);
	}
	build(1,0,n-1,a,tree);
	lli q;
	cin>>q;
	while(q--)
	{
		lli l,r;
		cin>>l>>r;
		l--;r--;
		cout<<query(1,0,n-1,l,r,tree)<<endl;
	}
	return 0;
}