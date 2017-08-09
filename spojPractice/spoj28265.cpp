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
#define msi multiset<int>
#define nl "\n"

typedef long long int lli;
typedef unsigned long long int ulli;
typedef double ld;

using namespace std;

void update_tree(int updateLeft,int updateRight,int newValue,int rangeLeft,int rangeRight,int index,int lazy[],vi &segTree)
{
	if(updateRight<rangeLeft||rangeRight<updateLeft)
		return;
	if(lazy[index]!=0)
	{
		segTree[index]+=lazy[index]*(rangeRight-rangeLeft+1);
		lazy[2*index]+=lazy[index];
		lazy[2*index+1]+=lazy[index];
		lazy[index]=0;
	}
	if(updateLeft<=rangeLeft&&rangeRight<=updateRight)
	{
		segTree[index]+=newValue*(rangeRight-rangeLeft+1);
		lazy[2*index]+=newValue;
		lazy[2*index+1]+=newValue;
		return;
	}
	int mid=(rangeLeft+rangeRight)/2;
	update_tree(updateLeft,updateRight,newValue,rangeLeft,mid,2*index,lazy,segTree);
	update_tree(updateLeft,updateRight,newValue,mid+1,rangeRight,2*index+1,lazy,segTree);
	segTree[index]=segTree[2*index]+segTree[2*index+1];
}

int query_tree(int queryLeft,int queryRight,int rangeLeft,int rangeRight,int index,int lazy[],vi &segTree)
{
	if(queryRight<rangeLeft||rangeRight<queryLeft)
		return 0;
	if(lazy[index]!=0)
	{
		segTree[index]+=lazy[index]*(rangeRight-rangeLeft+1);
		lazy[2*index]+=lazy[index];
		lazy[2*index+1]+=lazy[index];
		lazy[index]=0;
	}
	if(queryLeft<=rangeLeft&&rangeRight<=queryRight)
		return segTree[index];
	int mid=(rangeLeft+rangeRight)/2;
	int p1=query_tree(queryLeft,queryRight,rangeLeft,mid,2*index,lazy,segTree);
	int p2=query_tree(queryLeft,queryRight,mid+1,rangeRight,2*index+1,lazy,segTree);
	return p1+p2;
}

int main()
{
	fio;
	/*int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
	}*/
	lli n,m,w;
	cin>>n>>m>>w;
	int lazy[4*w];
	vi segTree;
	REP(i,4*w)	
	{
		segTree.pb(0);
		lazy[i]=0;
	}
	while(n--)
	{
		int l,r;
		cin>>l>>r;
		update_tree(l,r,1,0,w-1,1,lazy,segTree);
	}
	while(m--)
	{
		int x;
		cin>>x;
		int ans=query_tree(x,x,0,w-1,1,lazy,segTree);
		cout<<ans<<endl;
	}
	return 0;
}