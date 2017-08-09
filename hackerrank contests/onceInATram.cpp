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
#define sz size

typedef long long int lli;
typedef unsigned long long int ulli;
typedef double ld;

using namespace std;

bool lucky(int n)
{
	//cout<<"check "<<n<<endl;
	string s1=to_string(n/1000);
	string s2=to_string(n%1000);
	if(s2.length()==0)
		s2="000";
	else if(s2.length()==1)
		s2="00"+s2;
	else if(s2.length()==2)
		s2="0"+s2;
	int sum1=0,sum2=0;
	REP(i,3)
		sum1+=s1.at(i)-'0';
	REP(i,3)
		sum2+=s2.at(i)-'0';
	if(sum1==sum2) return true;
	else return false;
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
	int n;
	cin>>n;
	n++;
	while(1)
	{
		if(lucky(n))
		{
			cout<<n<<endl;
			break;
		}
		else n++;
	}
	return 0;
}