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
#define mt make_tuple
#define MOD 1000000007
#define fi first
#define se second
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<pair<int,int>>
#define viii vector<tuple<int,int,int>>
void findPair(int a[],int sum,int n)
{
	map<int,int> m;
	REP(i,n)
	{
		if(m.find(sum-a[i])!=m.end())
		{
			cout<<"pair found "<<m[sum-a[i]]<<" "<<i<<endl;
			cout<<"pair is "<<sum-a[i]<<" "<<a[i]<<endl;
		}
		m[a[i]]=i;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	//this is a O(n) solution using hashing
	int n;
	cin>>n;
	int a[n];
	REP(i,n) cin>>a[i];
	int sum;
	cin>>sum;
	findPair(a,sum,n);
}