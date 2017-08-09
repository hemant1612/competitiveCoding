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
#define sii set<int,int>

typedef long long int lli;
typedef unsigned long long int ulli;
typedef double ld;

using namespace std;

int size[36];

void f(lli n,lli k)
{
	if(n==0)
	{
		cout<<"a"<<endl;
		return;
	}
	else if(n==1)
	{
		cout<<"b"<<endl;
		return;
	}
	else if(n==2)
	{
		cout<<"c"<<endl;
		return;
	}
	n--;
	lli sz=size[n];
	if(k<=sz)
	{
		//cout<<"f "<<" n "<<n<<" k "<<k<<" sz "<<sz<<endl;
		f(n,k);
	}
	else
	{
		k-=sz;
		n--;
		sz=size[n];
		if(k<=sz)
		{
			//cout<<"f "<<" n "<<n<<" k "<<k<<" sz "<<sz<<endl;
			f(n,k);
		}
		else
		{
			k-=sz;
			n--;
			//cout<<"f "<<" n "<<n<<" k "<<k<<" sz "<<sz<<endl;
			f(n,k);
		}
	}
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
	size[0]=1;
	size[1]=1;
	size[2]=1;
	FOR(i,3,35)
	{
		size[i]=size[i-1]+size[i-2]+size[i-3];
	}
	lli n,k;
	cin>>n>>k;
	//k--;
	int sz=size[n];
	if(k<=sz)
	{
		//cout<<"f "<<" n "<<n<<" k "<<k<<" sz "<<sz<<endl;
		f(n,k);
	}
	else cout<<"-1"<<endl;
	return 0;
}