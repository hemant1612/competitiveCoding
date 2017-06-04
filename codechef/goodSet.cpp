#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <numeric> //accumulate for vector
#include <iomanip> //cout<<setprecision(1)<<fixed;
#include <climits> //limits like Infinity
#include <cstring> //memset
#include <set>
typedef long long int lli;
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define INF INT_MAX //Infinity
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define fi first
#define se second
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<pair<int,int>>
int a[500];
void initialize(vi &v)
{
	for(int i=2;i*i<500;i++)
	{
		if(a[i]==0)
		{
			for(int j=i*i;j<500;j+=i)
			{
				a[j]=1;
			}
		}
	}
	FOR(i,3,499)
	{
		if(!a[i])
		{
			v.pb(i);
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /*
		57 51 65 77 87

    */
    vi v;
    v.pb(57);
    v.pb(51);
    v.pb(65);
    v.pb(77);
    v.pb(87);
    v.pb(93);
	initialize(v);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		REP(i,n)
			cout<<v[i]<<" ";
		cout<<endl;
	}

}