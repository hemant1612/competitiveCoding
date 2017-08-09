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

map<string,lli> m;

lli countSeq(string s)
{
	//whatIs(s)
	if(s[0]=='0') return 0;
	if(len(s)==1) return 1;
	if(len(s)==2)
	{
		if((s.at(0)-'0')*10+(s.at(1)-'0')<=26)
		{
			if(s[len(s)-1]=='0') return 1;
			else return 2;
		}
		else
		{
			if(s[len(s)-1]=='0') return 0;
			else return 1;
		}
	}
	if(m[s]!=0) return m[s];
	if((s.at(0)-'0')*10+(s.at(1)-'0')<=26)
	{
		m[s]=countSeq(s.substr(1,len(s)))+countSeq(s.substr(2,len(s)));
	}
	else m[s]=countSeq(s.substr(1,len(s)));
	//cout<<"s is "<<s<<" ans m[s] is "<<m[s]<<endl;
	return m[s];
}

int main()
{
	fio;
	while(1)
	{
		string s;
		cin>>s;
		if(s[0]!='0') cout<<countSeq(s)<<endl;
		else break;
	}
	return 0;
}