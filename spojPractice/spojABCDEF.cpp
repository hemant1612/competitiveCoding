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

bool binarySearch(lli low,lli high,lli sh,vector<lli> v)
{
	if(low<=high)
	{
		int mid=low+(high-low)/2;
		if(v[mid]==sh)
			return true;
		if(v[mid]>sh)
			high=mid-1;
		if(v[mid]<sh)
			low=mid+1;
	}
	return false;
}

int main()
{
	/*int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
	}*/
	fio;
	int n;
	scanf("%d",&n);
	vi v;
	REP(i,n)
	{
		int x;
		cin>>x;
		v.pb(x);
	}
	multiset<lli> s;
	int vsize=v.size();
	REP(a,vsize)
	{
		REP(b,vsize)
		{
			REP(c,vsize)
			{
				s.insert(v[a]*v[b]+v[c]);
			}
		}
	}
	vi64 v1;
	REP(e,vsize)
	{
		REP(f,vsize)
		{
			REP(d,vsize)
			{
				if(v[d]==0)
					continue;
				v1.pb(v[d]*(v[f]+v[e]));
			}
		}
	}
	int vsize1=v1.size();
	int counter=0;
	REP(i,vsize1)
	{
		counter+=s.count(v1[i]);
	}
	printf("%d\n",counter );
}