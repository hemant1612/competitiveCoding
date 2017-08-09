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

int main()
{
	fio;
	int t;
	cin>>t;
	while(t--)
	{
		string s,t;
		cin>>s>>t;
		if(len(s)==1)
			cout<<"B"<<endl;
		else
		{
			map<char,int> ma;
			map<char,int> mb;
			REP(i,len(t))
			{
				mb[t.at(i)]++;
			}
			vector<char> oddA;
			REP(i,len(s))
			{
				char c=s.at(i);
				ma[c]++;
				if(mb[c]==0)
				{
					oddA.pb(c);
				}
			}
			//if A is a subset of B
			if(oddA.sz()==0) cout<<"B"<<endl;
			else
			{
				//A contains atleast one element that B doesnt
				int f=1;
				//check if B is a subset of A
				REP(i,len(t))
				{
					if(ma[t.at(i)]>=1)
					{
						f=1;
					}
					else
					{
						f=0;
						break;
					}
				}
				//if B is a subset of A then A wins
				if(f)
				{
					cout<<"A"<<endl;
				}
				else
				{
					//Both B and A contain odd elements now
					//If A contains an odd element with a map of >=2 then he/she wins
					int two=0;
					REP(i,oddA.sz())
					{
						if(ma[oddA[i]]>=2) two=1;
					}
					if(two) cout<<"A"<<endl;
					else cout<<"B"<<endl;
				}
			}
		}
	}

	return 0;
}