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

int isNumber(string n)
{
	REP(i,len(n))
	{
		if(isalpha(n[i])) return 0;
	}
	return 1;
}

int main()
{
	fio;
	int t;
	cin>>t;
	while(t--)
	{
		string a,b,c;
		char plus,equals;
		cin>>a>>plus>>b>>equals>>c;
		lli n1=-1,n2=-1,n3=-1;
		if(isNumber(a)) n1=atol(a.c_str());
		if(isNumber(b)) n2=atol(b.c_str());
		if(isNumber(c)) n3=atol(c.c_str());
		if(n1==-1) n1=n3-n2;
		if(n2==-1) n2=n3-n1;
		if(n3==-1) n3=n1+n2;
		cout<<n1<<" + "<<n2<<" = "<<n3<<endl;
	}

	return 0;
}