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
lli bSearch(int mid,int a[],int b[],int n)
{
	lli sum=0;
	REP(i,n)
	{
		sum+=a[i]+(i+1)*mid;
	}
	return sum;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,S;
	cin>>n>>S;
	int a[n];
	REP(i,n) cin>>a[i];
	lli low=0,high=n;
	int mid=0;
	lli sum=0;
	
}