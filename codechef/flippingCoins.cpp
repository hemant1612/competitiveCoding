#include <bits/stdc++.h>

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
#define mii map<int,int>
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define nl "\n"

typedef long long int lli;
typedef unsigned long long int ulli;
typedef double ld;

using namespace std;

ulli poW(lli x,ulli y)
{
	//this function only returns correct values upto the order of ~10^18
	//use pow of math to obtain greater answers
	lli temp;
	if(y==0)
		return 1;
	temp=poW(x,y/2);
	if(y%2==0)
		return temp*temp;
	else return x*temp*temp;
}

int bSearch(int low,int high,int a[],int sh)
{
	//function for searching till where is a sh<=
	while(low<high)
	{
		int mid=low+(high-low+1)/2;
		if(a[mid]>sh)
			high=mid-1;
		if(a[mid]<=sh)
			low=mid;
	}
	return low;
}

ulli modular_pow(ulli b,ulli e,ulli m)
{
	if(e==0)
		return 1;
	if(e==1)
		return b;
	else
	{
		ulli res=1;
		b=b%m;
		while(e>0)
		{
			if(e&1) //e%2
				res=(res*b)%m;
			e=e>>1;
			b=(b*b)%m;
		}
		return res%m;
	}
}
const int sz=10001;
vector<pair<int,int> > a[sz];
int dis[sz];
bool vis[sz]={0};
void Dijkstra(int source, int n)
{
	//you need an [int] array dis and a bool array vis
	//also a vii [a] with edge,weight pair
	//n is the number of nodes(vertices)
	/* Basically
		const int sz=10001;
		vector<pair<int,int> > a[sz];
		int dis[sz];
		bool vis[sz]={0};
	*/
    for(int i=0;i<sz;i++)
        dis[i]=INF;
    class prioritize
    {
    	public: bool operator ()(pair<int, int>&p1 ,pair<int, int>&p2)
    	{
    		return p1.second>p2.second;
    	}
    };
    priority_queue<pair<int,int> ,vector<pair<int,int> >, prioritize> pq;
    pq.push(make_pair(source,dis[source]=0));
    while(!pq.empty())
    {
        pair<int, int> curr=pq.top();
        pq.pop();
        int cv=curr.first,cw=curr.second;
        if(vis[cv])
            continue;
        vis[cv]=true; 
        for(int i=0;i<a[cv].size();i++)
            if(!vis[a[cv][i].first] && a[cv][i].second+cw<dis[a[cv][i].first])
                pq.push(make_pair(a[cv][i].first,(dis[a[cv][i].first]=a[cv][i].second+cw)));
    }
}

//node is 1 indexed. start,end,idx,l,r are 0 indexed
void build_segTree(int node, int start, int end,int a[],vector<int> &tree)
{
    if(start == end)
    {
        tree[node] = a[start];
    }
    else
    {
        int mid = (start + end) / 2;
        build_segTree(2*node, start, mid,a,tree);
        build_segTree(2*node+1, mid+1, end,a,tree);
        tree[node] = tree[2*node] + tree[2*node+1];
    }
}
void update_segTree(int node,int start,int end,int idx,int a[],vector<int> &tree)
{
	if(start==end)
	{
		if(a[idx]==0)
		{
			a[idx]=1;
			tree[node]=1;
		}
		else
		{
			a[idx]=0;
			tree[node]=0;
		}
	}
	else
	{
		int mid=(start+end)/2;
		if(start<=idx && idx<=mid)
		{
			update_segTree(2*node,start,mid,idx,a,tree);
		}
		else
		{
			update_segTree(2*node+1,mid+1,end,idx,a,tree);
		}
		tree[node]=tree[2*node]+tree[2*node+1];
	}
}
int query_segTree(int node,int start,int end,int l,int r,vi &tree)
{
	if(r<start or end<l)
	{
		return 0;
	}
	if(l<=start&&end<=r)
	{
		return tree[node];
	}
	int mid=(start+end)/2;
	int p1=query_segTree(2*node,start,mid,l,r,tree);
	int p2=query_segTree(2*node+1,mid+1,end,l,r,tree);
	return (p1+p2);
}

int main()
{
	fio;
	/*int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
	}*/
	int n,q;
	cin>>n>>q;
	int a[n];
	REP(i,n)
		a[i]=0;
	vi tree;
	REP(i,4*n)
		tree.pb(0);
	REP(i,q)
	{
		int choice;
		cin>>choice;
		if(choice==1)
		{
			int l,r;
			cin>>l>>r;
			int ans=query_segTree(1,0,n-1,l,r,tree);
			cout<<ans<<endl;
		}
		else
		{
			int l,r;
			cin>>l>>r;
			FOR(j,l,r)
			{
				update_segTree(1,l,r,j,a,tree);
			}
		}
	}
}