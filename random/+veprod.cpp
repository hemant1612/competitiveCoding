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
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin>>n;
	int a[n];
	cout<<"ans"<<endl;
	REP(i,n)
		cin>>a[i];
	int ans=0;
	REP(i,n)
	{
		int prod=1;
		for(int j=0;j<n-i;j++)
		{
			cout<<a[j]<<" ";
		}
		cout<<endl;
	}
	//cout<<ans<<endl;
}