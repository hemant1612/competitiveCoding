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
#include <unordered_set>
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
bool subarray0(int a[],int n)
{
	unordered_set<int> s;
	//insert 0 just in case if the first element itself is 0
	s.insert(0);
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
		if(a[i]==0)
			continue;
		if(s.find(sum)!=s.end())
		{
			cout<<sum<<endl;
			return true;
		}
		else s.insert(sum);
	}
	return false;
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin>>n;
	int a[n];
	REP(i,n) cin>>a[i];
	subarray0(a,n) ? cout<<"sum exists"<<endl :cout<<"sum does not exist"<<endl;
}