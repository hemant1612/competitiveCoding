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
	string s1,s2;
	cin>>s1>>s2;
	map<char,char> m;
	REP(i,s1.length())
	{
		m[s1.at(i)]=s2.at(i);
	}
	string convert;
	cin>>convert;
	REP(i,convert.length())
	{
		char ch=convert.at(i);
		if(ch-'0'>=0&&ch-'0'<=9)
			cout<<ch;
		else
		{
			if(ch>=65&&ch<=90)
			{
				char c=ch+32;
				cout<<char(m[c]-32);
			}
			else cout<<m[ch];
		}
	}	
	cout<<endl;
	return 0;
}