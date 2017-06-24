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
#define nl "\n"

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
	int n;
	cin>>n;
	priority_queue<int> q1;
	prq q2;
	lli sum=0;
	REP(i,n)
	{
		int x;
		cin>>x;
		sum+=x;
		if(x%10==0)
			q1.push(-1*x);
		else q2.push(-1*x);
	}
	int f=0;
	while(!q1.empty()||!q2.empty())
	{
		if(sum%10!=0)
		{
			cout<<sum<<endl;
			f=1;
			break;
		}
		else
		{
			if(!q2.empty())
			{
				sum+=q2.top();
				q2.pop();
			}
			else
			{
				cout<<"0"<<endl;
				break;
			}
		}
	}
}