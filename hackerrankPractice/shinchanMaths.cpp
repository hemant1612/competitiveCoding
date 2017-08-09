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

lli a[100000];
lli s[100000*4]={0};
lli lazy[100000*4]={0};

void build(lli id,lli l,lli r) //l=0 r=n
{
	if(r-l<2) //l+1=r
	{
		s[id]=a[l];
		return;
	}
	lli mid=(l+r)/2;
	build(id*2,l,mid);
	build(id*2+1,mid,r);
	s[id]=s[id*2]+s[id*2+1];
}

//increase all the members in this interval by x
void update(lli id,lli l,lli r,lli x)
{
	lazy[id]+=x;
	s[id]+=(r-l)*x;
}

//pass the information to the children
void shift(lli id,lli l,lli r)
{
	lli mid=(l+r)/2;
	update(id*2,l,mid,lazy[id]);
	update(id*2+1,mid,r,lazy[id]);
	lazy[id]=0; //passing is done
}

void increase(lli x,lli y,lli v,lli id,lli l,lli r) //l 0 indexed r 1 indexed
{
	if(x>=r||l>=y) return;
	if(x<=l&&r<=y)
	{
		update(id,l,r,v);
		return;
	}
	shift(id,l,r);
	lli mid=(l+r)/2;
	increase(x,y,v,id*2,l,mid);
	increase(x,y,v,id*2+1,mid,r);
	s[id]=s[id*2]+s[id*2+1];
}

lli sum(lli x,lli y,lli id,lli l,lli r) //l 0 indexed r 1 indexed
{
	if(x>=r||l>=y) return 0;
	if(x<=l&&r<=y) return s[id];
	shift(id,l,r);
	lli mid=(l+r)/2;
	return sum(x,y,id*2,l,mid)+sum(x,y,id*2+1,mid,r);
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
	lli n,q;
	cin>>n>>q;
	REP(i,n) cin>>a[i];
	while(q--)
	{
		lli choice,x,y;
		cin>>choice>>x>>y;
		x--;
		if(choice==1)
		{
			cout<<sum(x,y,1,0,n)%10<<endl;
		}
		else
		{
			lli v;
			cin>>v;
			increase(x,y,v,1,0,n);
		}
	}
	return 0;
}